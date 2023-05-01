#include "main.h"
/* betty style doc for function main goes there */
/**
 * _abs- prints number zero to nine
 * @n: takes integer value
 * Return: returns the value zero
 */

int _abs(int n)

{

	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
	_putchar('\n');
}
