#include "main.h"

/* betty style doc for function main goes there */
/**
 * _isdigit- is the prototype
 * @c: takes an integer value
 * Return: this returns 1 or 0 if otherwise
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
