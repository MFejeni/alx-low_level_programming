#include "variadic_functions.h"

/**
 * print_all - prints every thing from int to strings
 * @format: format of data type to be printed
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str, *seperator = "";
	va_list arg_lst;

	va_start(arg_lst, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", seperator, va_arg(arg_lst, int));
					break;
				case 'i':
					printf("%s%i", seperator, va_arg(arg_lst, int));
					break;
				case 'f':
					printf("%s%f", seperator, va_arg(arg_lst, double));
					break;
				case 's':
					str = va_arg(arg_lst, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", seperator, str);
					break;
				default:
					i++;
					continue;
			}
			seperator = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(arg_lst);
}
