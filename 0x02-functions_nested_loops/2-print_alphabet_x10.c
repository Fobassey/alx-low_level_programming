#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_alphabet_x10- prints number zero to nine
 * Return: returns the value zero
 */
void print_alphabet_x10(void)
{
	int m, n;

	for (m = 1; m <= 10; m++)
	{
		for (n = 97; n <= 122; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
