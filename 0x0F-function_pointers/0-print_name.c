#include "main.h"
#include <stdlib.h>

/**
 * print_name - function that prints name from parameter passed as function
 * pointer
 * @name: name to print
 * @f: function pointer
 * void
 */

void print_name(char *name, void (*f)(char *))
{

	(f(name));
}
