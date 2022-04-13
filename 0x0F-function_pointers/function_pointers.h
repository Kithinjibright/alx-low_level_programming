#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

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

/**
 * array_iterator - executes function given as a parameter on each element of an array
 * @array: array of integers
 * @size: array size
 * @action: pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int));

/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: size of elements in the array
 * @cmp: pointer to a function
 * Return: index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int));

#endif
