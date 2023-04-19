#include "3-calc.h"

/**
 * op_add - adds two integers given as parameters
 * @a: first num to add
 * @b: to be added to a
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two integers given as parameters
 * @a: to be subtracted from
 * @b: to subtract b from a
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers given as parameters
 * @a: first num to multiply
 * @b: to multiply with a
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - integer division of two integers given as parameters
 * @a: num to be divided
 * @b: num to divide with
 * Return: division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remeinder of two integers given as parameters
 * @a: num to be divided
 * @b: num to divide with
 * Return: Remeinder (modulos) of division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
