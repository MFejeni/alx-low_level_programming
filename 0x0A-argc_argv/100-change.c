#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - programme that prints number of coins needed for change
 * @argc: number of arguments
 * @argv: arguments
 * Return: 1 on failure
 */

int main(int argc, char *argv[])
{
	int chg;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	chg = atoi(argv[1]);
	if (chg < 0)
		printf("0\n");
	printf("%d\n", change(chg));
	return (0);
}

/**
 * change - brings the required change
 * @mny: money to be changed
 * Return: number of coins
 */

int change(int mny)
{
	int chg[5];
	int i, res = 0;

	chg[0] = 25;
	chg[1] = 10;
	chg[2] = 5;
	chg[3] = 2;
	chg[4] = 1;
	for (i = 0; i < 5; i++)
	{
		if (mny >= chg[i])
		{
			res += mny / chg[i];
			mny = mny % chg[i];
		}
	}
	return (res);
}

