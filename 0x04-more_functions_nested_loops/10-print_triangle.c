#include "main.h"


/**
 * print_triangle - prints a triangle followed by new line
 * @size: size of triangle
 */


void print_triangle(int size)

{

	int i, j, k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= (size - i); j++)
			{
				_putchar(32);
			}
			for (k = 1; k <= i; k++)
			{
				_putchar(35);
			}

			_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
