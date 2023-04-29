#include "main.h"
/* betty style doc for function main goes there */
/**
 * _islower- prints number zero to nine
 * @c: takes an integer
 * Return: returns the value zero
 */
int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
