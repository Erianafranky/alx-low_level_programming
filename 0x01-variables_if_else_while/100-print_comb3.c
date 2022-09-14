#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{

	int i = 0;
	int first;
	int last;

	while (i <= 99)

	{

		first = (i / 10 + '0');

		last = (i % 10 + '0');

		if (first < last)

		{

			putchar(first);
			putchar(last);

			if (i != 89)

			{

				putchar(',');

				putchar(' ');

			}

		}

		i++;

	}
putchar('\n');

return (0);

}
