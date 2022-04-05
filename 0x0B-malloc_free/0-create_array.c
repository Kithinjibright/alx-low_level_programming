#include "main.h"
#include <stdlib.h>

/**
 * create_array: creates array of chars initializes with specific char
 * @size: array size
 * @c: char to fill the array with
 * Return: Filled array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i = 0;

	if (size <= 0) /* validate size input */
		return (NULL);
	arr = malloc(sizeof(char) * size); /* allocate memory */

	if (arr == NULL) /* validate memory */
		return (NULL);

	while (i < (int)size) /* set array values to char c */
	{
		*(arr + i) = c;
		i++;
	}
	*(arr + i) = '\0';

	return (arr);
}


