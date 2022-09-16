#include "main.h"

/**
 * jack_bauer - func that prints every minute of the day of Jack Bauer, starti
 * n from 00:00 to 23:59
 * and resets mins
 * Return: 0
 */

void jack_bauer(void)

{

	int hrs = 0;
	int mins = 0;
	int hrs_rem;
	int mins_rem;

	while (hrs <= 23)

	{

		while (mins <= 59)

		{

			mins_rem = mins % 10;
			hrs_rem = hrs % 10;
			_putchar(hrs / 10 + '0');
			_putchar(hrs_rem + '0');
			_putchar(':');
			_putchar(mins / 10 + '0');
			_putchar(mins_rem + '0');
			mins++;
			_putchar('\n');
		}
		hrs++;
		mins = 0;
	}
}
