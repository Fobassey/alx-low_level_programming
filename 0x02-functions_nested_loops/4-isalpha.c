#include "main.h"
/* betty style doc for function main goes there */
/**
 * _isalpha- prints number zero to nine
 * @c: takes an integer
 * Return: returns the value zero
 */
int _isalpha(int c)

{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
