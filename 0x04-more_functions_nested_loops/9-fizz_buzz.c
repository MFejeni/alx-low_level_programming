#include "main.h"
#include <stdio.h>

/**
 * main - prints fizz if number is divisible by 3, buzz if number is 
 * divisible by 5, fizzbuzz if number is divisible by 3 and 5, number otherwise
 * void
 */

void main(void)
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0 && i != 100)
			printf("Fizz ");
		else if (i % 5 == 0 && i % 3 != 0 && i != 100)
			printf("Buzz ");
		else if (i % 3 == 0 && i % 5 == 0 && i != 100)
			printf("FizzBuzz ");
		else if (i != 100)
			printf("%d ", i);
		else
			printf("%d", i);
	}
}
