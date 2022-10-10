#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - stuct definition of dog
 */

typedef struct dog dog_t;

/**
 * struct dog - struct that saves information of dog
 * @name: dog name
 * @age: age of dog
 * @owner: dog owner name
 *
 * Description: structure of a dog inforamation
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
