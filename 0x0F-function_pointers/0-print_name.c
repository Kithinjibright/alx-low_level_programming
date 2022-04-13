#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: print this string
 * @f: pointer to a function
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
