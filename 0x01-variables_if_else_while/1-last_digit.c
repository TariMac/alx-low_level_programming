#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a randomly
 * generated number and whether it is greater
 * than 5, less than 5, or 0.
 * Return: Always 0.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX /2;
	last - n % 10;

	if (last > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, last);
	}
	else if (last == 0)
	{
		printf("Last digit of %i is %i and is 0\n",n, last);
	}
	else if (last < 6)
	{
		printf("Last digit of %i is %i and is less han 6 and not 0\n", n, last);
	}
	return (0);
}
