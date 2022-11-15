#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - get length of string
 * @str: string
 * Return: lenght of string
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - Copy string
 * @dest: buffer to store string
 * @src: source of string
 * Return: pointer to buffer
 */

char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: struct dog
 */

dog_ *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);
	doggy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}

	doggy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}

	doggy->name = _strcopy(doggy->name, name);
	doggy->age = age;
	doggy->owner = _strcopy(doggy->owner, owner);

	return (doggy);
}
