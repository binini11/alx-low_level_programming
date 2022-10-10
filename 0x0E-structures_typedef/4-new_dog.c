#include <stdio.h>
#include "dog.h"

/**
* init_dog - initializes a variable of type dog struct
*@d: struct dog.
*@name: name of the dog.
*@age: age of dog.
*@owner: owner info
*
* * Return: no return
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner =  owner;
	}
}
