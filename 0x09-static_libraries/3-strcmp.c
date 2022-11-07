#include "main.h"

/**
 * _strcmp - function copies string
 * @s1: sting one
 * @s2: string two
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while ((s1[a] == s2[a]) && (s1[a] != '\0'))
	{
		a++;
	}
	return (s1[a] - s2[a]);
}
