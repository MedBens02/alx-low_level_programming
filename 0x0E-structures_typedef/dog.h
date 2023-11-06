#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - a dog's info
 *
 * @name: its name
 * @age: its age
 * @owner: its owner
 *
 * Description: a dog.
 */

#include <stdio.h>
#include <stdlib.h>

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
