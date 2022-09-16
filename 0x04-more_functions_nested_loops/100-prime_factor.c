#include <stdio.h>

/**
 * main - calculate largeast prime of 612852475143
 *
 * Return: Success Always
 */

int main(void)
{
	long int x = 612852475143;
	long int i;

	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			x = x / i;
		}
	}
	printf("%1d\n", i);
	return (0);
}

