#include "main.h"

/**
 * cap_string - change lowercare letters of string to uppercase
 * @s: string
 * Return: 0
 */

char *cap_string(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		if (s[a] == 32 || s[a] == 44 || s[a] == 46 ||
				s[a] == 59 || s[a] == '\t' || s[a] || '\n' ||
				s[a] == '!' || s[a] == '?' || s[a] == '(' ||
				s[a] == ')' || s[a] == '{' || s[a] == '}')
		{
			if (s[a + 1] >= 97 && s[a + 1] <= 122)
				s[a + 1] = s[a + 1] - 32;
		}
		a++;
	}
	return (s);
}
