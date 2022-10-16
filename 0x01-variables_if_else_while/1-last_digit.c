#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - check the reurn value of n if
 * greater than 5 prints greater than 5
 * if n is 0prints is 0
 * if n is less than 6 and not 0 prints less than 6 and not 0
 * Return: 0
 */
int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (lastDigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	else if (lastDigit == 0)
		printf("Last digit of %d is 0 and is 0\n", n);
	else if (lastDigit < 6 && lastDigit != 0)
		printf("Last digit of %d is %d less than 6 and not 0\n", n, lastDigit);
	return (0);
}
