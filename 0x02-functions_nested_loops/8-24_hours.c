#include "main.h"

/**
 * jack_bauer - prints the time from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int hour, hourUnit, minTenth, minUnit;
	for (hour = 48; hour <= 50; hour++)
	{
		if (hour != 50)
		{
			for (hourUnit = 48; hourUnit <= 57; hourUnit)
			{
				for (minTenth = 48; minTenth <= 53; minTenth++)
				{
					for (minUnit = 48; minUnit <= 57; minUnit++)
					{
						_putchar(hour);
						_putchar(hourUnit);
						_putchar(':');
						_putchar(minTenth);
						_putchar(minUnit);
					}
				}
			}
		}
		else
		{
			for (hourUnit = 48; hourUnit <= 52; hourUnit)
			{
				for (minTenth = 48; minTenth <= 53; minTenth++)
				{
					for (minUnit = 48; minUnit <= 57; minUnit++)
					{
						_putchar(hour);
						_putchar(hourUnit);
						_putchar(':');
						_putchar(minTenth);
						_putchar(minUnit);
					}
				}
			}
		}
	}
}
