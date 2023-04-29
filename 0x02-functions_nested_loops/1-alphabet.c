#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_alphabet- prints number zero to nine
 * Return: returns the value zero
 */
void print_alphabet(void)
{

	int n;

	for (n = 97; n <= 122; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}

