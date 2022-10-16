#include <stdio.h>

/**
 * main - print alphabet expect q and e
 * descritpion: list the alphabet without q and e in lowercase
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{

		if (ch != 'e' && ch != 'q')
			putchar(ch);

	}

	putchar('\n');
	return (0);
}
