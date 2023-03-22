#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - prints the remaining days of the year
 * @month: input month
 * @day: input day
 * @year: input year
 */

void print_remaining_days(int month, int day, int year)
{
	int days, mon;

	days = 0;
	for (mon = month; mon <= 12; mon++)
	{
		if (month % 2 == 0 && month != 2 && month <= 7)
		{
			days += 31;
		}
		else if (month % 2 == 0 && month >= 8)
			days += 31;
		else if (year % 4 == 0 && month == 2)
			days += 29;
		else if (month == 2)
			days += 28;
		else
			days += 30;
	}
	printf("Day of the year: %d", day);
	printf("Remaining days: %d", days);
}
