#include "main.h"

/**
 * times_table - prints 9x9 times table
 */

void times_table(void)

{

	int s;
	int t;
	int x;

	for (s = 0; s <= 9; s++)

	{

		_putchar(48);

		for (t = 1; t <= 9; t++)

		{

			x = s * t;
			_putchar(44);
			_putchar(32);
			if ((x / 10) == 0)

			{
				_putchar(32);
				_putchar(x + '0');
			}

			else

			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}

		}

		_putchar(10);
	}
}
