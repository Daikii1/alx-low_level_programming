#include <stdlib.h>
#include "dog.h"

/**
 * _copy_str  - creat
 * @src:the src
 * Return:P
 */

char *_copy_str(char *src)
{
	char *ptr;
	int cpt, ln;

	if (src == NULL)
	{
		return (NULL);
	}

	for (ln = 0; src[ln] != '\0'; ln++)
		;

	ptr = malloc(sizeof(char) * (ln + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (cpt = 0; src[cpt] != '\0'; cpt++)
	{
		ptr[cpt] = src[cpt];
	}

	ptr[cpt] = '\0';
	return (ptr);
}

/**
 * new_dog -a fucntion that make a new dog
 * @name:this is the Name of the dog
 * @age:thhis is theAge of the dog
 * @owner:this is Owner of the dog
 * Return:p
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *felix;
	char *n_name, *n_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	felix = malloc(sizeof(dog_t));
	if (felix == NULL)
	{
		return (NULL);
	}

	n_name = _copy_str(name);
	if (n_name == NULL)
	{
		free(felix);
		return (NULL);
	}
	(*felix).name = n_name;

	(*felix).age = age;

	n_owner = _copy_str(owner);
	if (n_owner == NULL)
	{
		free((*felix).name);
		free(felix);
		return (NULL);
	}
	(*felix).owner = n_owner;

	return (felix);
}
