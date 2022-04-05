#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - puts character to standard output
 * @c: character to put to standard output
 */

int _putchar(char c);

/**
 * create_array - creates array of chars and initialize it with a specific char
 * @size: array size
 * @c: fill array values with this char
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c);

/**
 * _strdup - duplicates a string
 * @str: duplicate this string
 * Return: duplicated string
 */

char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif
