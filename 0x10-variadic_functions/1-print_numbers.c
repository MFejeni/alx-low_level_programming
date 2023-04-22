#include "variadic_functions.h"

/**
 * print_numbers - prints numbers given as arguments
 * @separator: separator string
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num_lst;

	va_start(num_lst, n);
	for (i = 0; i < n; i++)
		printf("%i%s", va_arg(num_lst, int), (separator && i != n - 1) ? separator : "");
	va_end(num_lst);
	printf("\n");


}
