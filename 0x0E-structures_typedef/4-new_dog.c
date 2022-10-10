#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
*new_dog - new dog is created.
*@name: name of the dog.
*@age: age of dog.
*@owner: owner info
*
* * Return: no return
*on fail null is returned
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int i, Nowner, Nname;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}

	for (Nname = 0; name[Nname]; Nname++)
		;
	for (Nowner = 0; owner[Nowner]; Nowner++)
		;

	p_dog->name = malloc(Nname + 1);
	p_dog->owner = malloc(Nowner + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->owner);
		free(p_dog->name);
		free(p_dog);
		return (NULL);
	}

	for (i = 0; i < Nname; i++)
	{
		p_dog->name[i] = name[i];
	}
	p_dog->name[i] = '\0';

	p_dog->age = age;

	for (i = 0; i < Nowner; i++)
	{
		p_dog->owner[i] = owner[i];
	}
	p_dog->owner[i] = '\0';
	return (p_dog);
}

