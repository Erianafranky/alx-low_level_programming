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
	int mid;
	int last;

	while (i <= 999)

	{

		first = (i / 100 + '0');
		mid = (i / 10 % 10 + '0');
		last = (i % 10 + '0');


		if ((first < mid) && (mid < last))

		{
			putchar(first);
			putchar(mid);
			putchar(last);

			if (i != 789)

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
