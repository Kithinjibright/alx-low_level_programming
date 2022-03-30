#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to evaluate
 *Return: length of the string
 */

int _strlen_recursions(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (1 + _strlen_recursion(s));
}
