#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - a fucntion that prints a struct dog
 * @d: the dog to print
 * Return: none
 **/

void print_dog(struct dog *d)
{
	if (d == NULL)
	return;
	printf("The Name is: %s\n", (d->name == NULL) ? "(nil)" : d->name);
	printf("The Age is: %f\n", d->age);
	printf("The Owner is: %s\n", (d->owner == NULL) ? "(nil)" : d->owner);
}
