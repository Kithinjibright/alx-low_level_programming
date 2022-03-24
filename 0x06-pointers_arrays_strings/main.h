#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - puts character to standard output
 * @c: character to put to standard output
 */

int _putchar(char c);

/**
 * _strcat - concatenates two strings
 * @dest: string being appended to
 * @src: append this string
 * Return: the concatenated string
 */

char *_strcat(char *dest, char *src);

/**
 * _strncat - concatenates n bytes to destination string
 * @dest: string being appended to
 * @src: append this string
 * Return: the concatenated string
 */

char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy -  copies n bytes of a source into buffer of a destination string
 * @dest: copy source to this buffer
 * @src: source to copy
 * @n: n bytes to copy
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - compares two string
 * @s1: string one
 * @s2: string two
 * Return: int that tells num spaces in between
 */

int _strcmp(char *s1, char *s2);

/**
 * reverse_array - reverses elements of an array
 * @a: array
 * @n: number of elements in an array
 */

void reverse_array(int *a, int n);

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string to change
 * Return: string with all letters in uppercase
 */

char *string_toupper(char *);

/**
 * cap_string - capitalize all words of a string
 * @s: string to manipulate
 * Return: string with capialized words
 */

char *cap_string(char *);

/**
 * rot13 - encode string using rot13
 * @s: string to encode
 * Return: encoded string
 */

char *rot13(char *s);

/**
 * leet - encode string to 1337 leet
 * @s: manipulate this string
 * Return: encoded string
 */

char *leet(char *);

/**
 * print_number - print integer, without using long, arrays, or pointers
 * @n: prints this number
 */

void print_number(int n);

char *infinite_add(char *n1, char *n2, char *r, int size_r);

#endif
