#include "main.h"

/**
 * print_alphabet_x10 - loops 10x
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char ch;

	while (i++ <= 9)
	{

           for (ch = 'a'; ch <= 'z'; ch++)
           {  
		_putchar(ch);
           }   
	
	   _putchar('\n');
	}
}
