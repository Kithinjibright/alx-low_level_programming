#define MAIN_H

/**
 * _putchar - puts character to standard output
 * @c: character to put to standard output
 */

int _putchar(char c);

/**
 * _memset - fills memory with constant byte
 * @s: fill memory to this buffer
 * @b: source to fill
 * @n: n bytes to fill with
 * Return: filled memory
 */

char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - copies memory area
 * @dest: copy memory area to this buffer
 * @src: memory area to copy from
 * @n: n bytes to copy
 * Return:  copied memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - locates character in a string
 * @s: string
 * @c: character to locate
 * Return: string where the character is found
 */

char *_strchr(char *s, char c);
