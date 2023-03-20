#include "main.h"

/**
 * jack_bauer - prints the time from 00:00 to 23:59
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
						_putchar(hour);
						_putchar(hourUnit);
						_putchar(':');
						_putchar(minTenth);
						_putchar(minUnit);
						_putchar('\n');
					}
				}
			}
		}
		else
		{
			for (hourUnit = 0; hourUnit <= 4; hourUnit++)
			{
				for (minTenth = 0; minTenth <= 5; minTenth++)
				{
					for (minUnit = 0; minUnit <= 9; minUnit++)
					{
						_putchar(hour);
						_putchar(hourUnit);
						_putchar(':');
						_putchar(minTenth);
						_putchar(minUnit);
						_putchar('\n')
					}
				}
			}
		}
	}
}
