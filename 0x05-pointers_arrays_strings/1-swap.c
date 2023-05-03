#include "main.h"

/* betty style doc for function main goes there */
/**
 * swap_int- swap the values in the pointer
 * @a: is  pointer
 * @b: is a pointer
 * Return: returns the value zero
 */

void swap_int(int *a, int *b)

{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
