#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - Prints name, age and owner if not null.
 * @d: is pointer to the struct dog.
 * You are allowed to use the standard library
**/

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
