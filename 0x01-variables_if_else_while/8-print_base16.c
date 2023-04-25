#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main-prints number zero to nine
 * Return: returns the value zero
 */
int main(void)
{

	int ch;
	int sh;

	for (ch = 48; ch <= 57; ch++)
	{
	putchar(ch);
	}
	for (sh = 97; sh <= 102; sh++)
	{
	putchar(sh);
	}
	putchar('\n');
	return (0);
}

