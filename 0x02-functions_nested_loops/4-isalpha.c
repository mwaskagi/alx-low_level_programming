#include "main.h"

/**
 * _isaplha - get the char
 * Description: the
 * @c: ttie letter
 * Return: 1 if letter
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
