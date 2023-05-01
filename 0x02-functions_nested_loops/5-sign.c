#include "main.h"
/* betty style doc for function main goes there */
/**
 * print_sign- prints number zero to nine
 * @n: ia an integer
 * Return: returns the value zero
 */
int print_sign(int n)

{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}
