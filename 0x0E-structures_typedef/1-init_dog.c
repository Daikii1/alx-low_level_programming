#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - its a function that initialize a variable of type struct dogg
 ** @d: pointer
 * @name: this is the inputname
 * @age: thats the age of the dog
 * @owner:this is the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	return;
	else
	d->name = name;
	d->age = age;
	d->owner = owner;
}
