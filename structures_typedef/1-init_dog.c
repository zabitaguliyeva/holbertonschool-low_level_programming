#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize struct
 * @d: var
 * @name: var
 * @age: var
 * @owner: var
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
