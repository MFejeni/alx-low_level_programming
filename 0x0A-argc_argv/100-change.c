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
	int result, chg;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	chg = atoi(argv[1]);
	if (chg < 0)
		printf("0\n");
	printf("%d\n", change(chg));
}

/**
 * change - brings the required change
 * @mny: money to be changed
 * Return: number of coins
 */

int change(int mny)
{
	int chg[5] = [25, 10, 5, 2, 1];
	int i, res = 0;

	for (i = 0; i < 5; i++)
	{
		if (chg[i] >= mny)
		{
			res += mny / chg[i];
			mny = mny % chg[i];
		}
	}
	return (res);
}

