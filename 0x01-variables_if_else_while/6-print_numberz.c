#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main-prints number zero to nine
 * Return: returns the value zero
 */
int main(void)
{

	int ch = 0;

	for (ch = 0; ch <= 9; ch++)
	{
	putchar(ch + 48);
	}
	putchar('\n');
	return (0);
}
