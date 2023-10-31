#include "main.h"

/**
 * cnt_word - counts num of words in a str.
 *
 * @str: string
 *
 * Return: num of words.
 */

int cnt_word(char *str)
{
	int n = 0;
	int word = 0;

	if (str == NULL || *str == '\0')
		return (0);

	while (*str)
	{
		if (*str == ' ')
		{
			if (word)
			{
				word = 0;
				n++;
			}
		}
		else
		{
			if (!word)
				word = 1;
		}
		str++;
	}

	if (word)
		n++;

	return (n);
}

/**
 * start_word - finds the index of the start of words.
 *
 * @str: string
 * @n: number of words
 *
 * Return: ptr to indices of words starts.
 */

int *start_word(char *str, int n)
{
	int *starts;
	int i, word = 0;
	int word_check = 0;

	starts = malloc(sizeof(int) * n);

	if (starts == NULL)
	{
		free(starts);
		return (NULL);
	}

	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] == ' ')
			word_check = 0;
		else if (!word_check)
		{
			starts[word] = i;
			word_check = 1;
			word++;
		}
	}

	return (starts);
}

/**
 * len_word - finds the lengths of the words.
 *
 * @str: string
 * @n: number of words.
 * @starts: indices of words starts.
 *
 * Return: ptr to lengths of words.
 */

int *len_word(char *str, int n, int *starts)
{
	int *lens;
	int i, start, end;

	lens = malloc(sizeof(int) * n);

	if (lens == NULL)
	{
		free(lens);
		return (NULL);
	}

	for (i = 0; i < n; i++)
	{
		start = starts[i];
		end = start;

		while (str[end] != ' ' && str[end] != '\0')
			end++;

		lens[i] = end - start;
	}

	return (lens);
}

/**
 * split_words - splits the str into words.
 *
 * @str: strinf
 * @n: number of words
 * @starts: words starts
 * @lens: words lens
 *
 * Return: words.
 */

char **split_words(char *str, int n, int *starts, int *lens)
{
	char **words;
	int i, j, word_len;

	words = malloc((sizeof(*words)) * (n + 1));

	if (words == NULL)
	{
		free(words);
		return (NULL);
	}

	for (i = 0; i < n; i++)
	{
		word_len = lens[i];

		words[i] = malloc(word_len + 1);
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}

		for (j = 0; j < word_len; j++)
			words[i][j] = str[starts[i] + j];

		words[i][word_len] = '\0';
	}
	words[n] = NULL;

	return (words);
}

/**
 * strtow - cuts the str to words.
 *
 * @str: string
 *
 * Return: ptr to array of words, NULL if fail or str is NULL.
 */

char **strtow(char *str)
{
	char **words;
	int n = 0;
	int *starts;
	int *lens;

	n = cnt_word(str);
	starts = start_word(str, n);
	lens = len_word(str, n, starts);
	words = split_words(str, n, starts, lens);

	if (n == 0)
	{
		free(words);
		return (NULL);
	}

	free(starts);
	free(lens);

	return (words);
}

