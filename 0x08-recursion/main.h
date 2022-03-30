#ifndef MAIN_H
#define MAIN_H

/**
 * _putchar - puts character to standard output
 * @c: character to put to standard output
 */

int _putchar(char c);

/**
 * _puts_recursion - prints a string followed by new line
 * @s: string to be printed
 */

void _puts_recursion(char *s);

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to reverse
 */

void _print_rev_recursion(char *s);

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to evaluate
 *Return: length of the string
 */

int _strlen_recursions(char *s);

/**
 * factorial - calculates factorial of a number
 * @n: number to calculate the factorial
 * Return: value of integer
 */

int factorial(int n);

/**
 * _pow_recursion - prints value f x raise to power of y
 * @x: value to multiply
 * @y: number of time to multiply the value
 * Return: value multiplied y times
 */

int _pow_recursion(int x, int y);

/**
 * _sqrt_recursion - find natural square root of n
 * @n: n
 * Return: natural square root, or -1 if not natural root
 */

int _sqrt_recursion(int n);

/**
 * is_prime_number - check if prime
 * @n: number to check
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n);

/**
 * is_palindrome - check if palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s);

int wildcmp(char *s1, char *s2);

#endif
