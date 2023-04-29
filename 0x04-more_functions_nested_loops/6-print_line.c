#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_line- this prints a line
 * @n: takes an integer
 * Return: returns the equivalent values
 */

void print_line(int n)

{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
