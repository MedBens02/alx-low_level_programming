#include "dog.h"

/**
 * _strdip - Duplicates a str
 *
 * @str: str to duplicate
 *
 * Return: ptr to a new str or NULL if fail
 */
char *_strdup(char *str)
{
	char *ds;
	unsigned int len = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	ds = malloc(sizeof(char) * len + 1);
	if (ds == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		ds[i] = str[i];

	return (ds);
}

/**
 * new_dog - creates a new dog.
 *
 * @name: its name
 * @age: its age
 * @owner: its owner
 *
 * Return: dog's info
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = _strdup(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->age = age;

	dog->owner = _strdup(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	return (dog);
}
