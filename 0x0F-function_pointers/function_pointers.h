#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/**
 * _putchar - writes the character c to stdout
 * @c: Character to print
 * Return: On success 1.
 * on error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * print_name - prints a name
 * @name: print this string
 * @f: pointer to a function
 */

void print_name(char *name, void (*f)(char *));

#endif
