#include "variadic_functions.h"

/**
 * print_strings - prints strings given as parameters
 * @separator: string separator
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg_lst;
	char *str;

	va_start(arg_lst, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arg_lst, char *);
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && !i)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}
	printf("\n");
	va_end(arg_lst);

}
