#inclide "main.h"

/**
 * hour2 - prints if hour equal 2
 * void
 */

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
