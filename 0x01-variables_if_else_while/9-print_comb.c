#include <stdio.h>
/**
 * main - Print numbers seperated by a comma and space.
 * Return: Always 0
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(49 + num);
		if (num < 9)
		{
			putchar(",");
			putchar(" ");
		}
			num++;
	}
	putchar("\m");
	return (0);
}
