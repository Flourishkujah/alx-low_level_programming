#include "main.h"

/**
 * print_square - print a square of input size
 * @size: dimensions of square
 * Return: nothing
 **/

void print_square(int size)
{
	int x, y;

	if (size <= 0)
		_putchar('\n');
	for (y = 0; y < size; y++)
	{ 
		for (x = 0; x < size; x++)
		{
		_putchar('#');
	}
		_putchar('\n');
			}
}

