#include "main.h"

/**
 * jack_bauer - prints the time from 00:00 to 23:59
 *
 *void
 */

void jack_bauer(void)
{
	int hour, hourUnit, minTenth, minUnit;

	for (hour = 0; hour <= 2; hour++)
	{
		if (hour != 2)
		{
			for (hourUnit = 0; hourUnit <= 9; hourUnit++)
			{
				for (minTenth = 0; minTenth <= 5; minTenth++)
				{
					for (minUnit = 0; minUnit <= 9; minUnit++)
					{
						_putchar(hour + 48);
						_putchar(hourUnit + 48);
						_putchar(':');
						_putchar(minTenth + 48);
						_putchar(minUnit + 48);
						_putchar('\n');
					}
				}
			}
		}
		else
		{
			hour2();
		}
	}
}
/*
void hour2(void)
{
	int hourUnit, minTenth, minUnit;

	for (hourUnit = 0; hourUnit <= 4; hourUnit++)
	{
		for (minTenth = 0; minTenth <= 5; minTenth++)
		{
			for (minUnit = 0; minUnit <= 9; minUnit++)
			{
				_putchar(hour + 48);
				_putchar(hourUnit + 48);
				_putchar(':');
				_putchar(minTenth + 48);
				_putchar(minUnit + 48);
				_putchar('\n')
			}
		}
	}
}
*/
