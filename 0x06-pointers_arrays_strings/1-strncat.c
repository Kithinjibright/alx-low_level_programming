#include "main.h"

/**
 * _strncat - concatenates n bytes to destination string
 * @dest: string being appended to
 * @src: append this string
 * Return: the concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0') /*i index of null terminator*/
		i++;
	
	while (src[j] != src[n]) /*appends replacing null terminator*/
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	
	return (dest);
}
