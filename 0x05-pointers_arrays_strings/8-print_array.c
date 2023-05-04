#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * print_array- prints the elements of an array
 * @a: is a pointer
 * @n: is an interger type
 * Return: returns the value zero
 */

void print_array(int *a, int n)

{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(",");
		}
	}
	putchar('\n');
}
