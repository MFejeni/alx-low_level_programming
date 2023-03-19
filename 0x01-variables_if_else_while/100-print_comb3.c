#include <stdio.h>

/**
 * main - prints combination of 2 digits
 *
 * Return: 0 for success
 */

int main(void)
{
	int tenth = 48;
	// int units = 49;

	while (tenth <= 56)
	{
		int units = 49;

		while (units <= 57)
		{
			if (units > tenth)
			{
				putchar(tenth);
				putchar(units);

				if (tenth != 56 && units != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
			units++;
		}
		tenth++;
	}
	putchar('\n');
	return (0);
}
