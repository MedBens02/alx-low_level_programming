#ifndef _LISTS_H
#define _LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct node - creates a single linked list
 *
 * str: string
 * @len: len of the str
 * @next: a ptr to the next node
 * Description: creates a node
 */
struct node
{
	char *str;
	unsigned int len;
	struct node *next;
};
typedef struct node list_t;


int _putchar(char c);

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
