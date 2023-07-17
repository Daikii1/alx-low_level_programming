#ifndef DOG_H
#define DOG_H

/**
 * struct dog - its s Struct dog fucntion
 * @name: the name of the dog
 * @age: his age
 * @owner:  thats the owner of the dog
 * Description: This struct is for dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
