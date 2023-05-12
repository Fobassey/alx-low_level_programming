#include "main.h"

/* betty style doc for function main goes there */
/**
 *_pow_recursion- a function that computes the value of x raised to y
 * @x: is the input
 * @y: is the input
 * Return: returns the value of x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
