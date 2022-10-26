#include "main.c"

/**
 * _atoi - converts string into integer
 * @s: contain charcter
 * Return: 0
 */

int _atoi(char *s)
{
	int a = 0, b = 1;

	unsingned int c = 0;

	while (s[a] != '\0')
	{
		if ((s[a] < '0' || s[a] > '9') && (s[a] == '-'))
		{
			b = b * -1;
		}
		else if ((s[a] >= '0' && s[a] <= '9'))
		{
			c = c * 10 + (s[a] - '0');
			if ((s[a + 1] < '0' || s[a + 1] > '9'))
				break;
		}
		a++;
	}
	return (c * b);
}
