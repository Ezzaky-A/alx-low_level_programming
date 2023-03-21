#include "dog.h"
#include <stdio.h>
/**
 * init_dog-function that initialize a variable of type struct dog
 * @d: variable
 * @name: variable
 * @age : variable
 * @owner : variable
 * Return : nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
