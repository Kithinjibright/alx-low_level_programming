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

/**
 * str_concat - concatenates two strings
 * @s1: string one to concatenate
 * @s2: string two to concatenate
 * Return: string one and two concatenated
 */

char *str_concat(char *s1, char *s2);

/**
 * alloc_grid - returns a pointer to a 2d array of integers
 * @width: columns
 * @height: rows
 * Return: pointer to 2d array
 */

int **alloc_grid(int width, int height);

/**
 * free_grid - frees the 2d grid that was previously created in alloc_grid function
 * @grid: pointer to previous 2d array
 * @height: height of array
 */

void free_grid(int **grid, int height);

/**
 * argstostr - concatenats arguments of the program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to array
 */

char *argstostr(int ac, char **av);

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */

char **strtow(char *str);

#endif
