#ifndef DOG_H
#define DOG_H

/**
 * struct dog - data type of dog
 * @name: name of the dog
 * @age: age of the dpg
 * @owner: dog owner
 * Return: 0
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;
#endif
