#include "main.h"

/* betty style doc for function main goes there */
/**
 * _print_rev_recursion-a function that prints a string in reverse
 * @s: is the input
 * Return: returns the value zero
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
