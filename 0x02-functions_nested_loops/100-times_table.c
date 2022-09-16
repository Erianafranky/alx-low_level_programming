#include "main.h"

/**
 * print_times_table - prints n times table
 * @n: value of times table dimensions
 */

void print_times_table(int n)

{

	int s, t, x;

	if (n <= 15 && n >= 0)
	{
		for (s = 0; s <= n; s++)
		{
			_putchar(48);
			for (t = 1; t <= n; t++)
			{
				x = s * t;
				_putchar(44);
				_putchar(32);
				if ((x / 100) == 0 && (x / 10) == 0)
				{
					_putchar(32);
					_putchar(32);
					_putchar((x % 10) + '0');
				}
				else if ((x / 100) == 0)
				{
					_putchar(32);
					_putchar((x / 10) + '0');
					_putchar((x % 10) + '0');
				}
				else
				{
					_putchar((x / 100) + '0');
					_putchar(((x / 10) % 10) + '0');
					_putchar((x % 10) + '0');
				}
			}
			_putchar(10);
		}
	}
}
