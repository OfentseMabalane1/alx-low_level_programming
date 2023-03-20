#include "dog.h"
#include <stdlib.h>

/**
 * Write a function that prints a struct dog
 * Prototype: void print_dog(struct dog *d);
 * you are allowed to use the standard library
 * If an element of d is NULL, print (nil) instead of this element. 
 * (if name is NULL, print Name: (nil))
 * If d is NULL print nothing.
 * */

void print_dog(struct dog *d);
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
