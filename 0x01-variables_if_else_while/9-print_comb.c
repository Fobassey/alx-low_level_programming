#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main-prints number zero to nine
 * Return: returns the value zero
 */
int main(void)
{

	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
	putchar(ch);
		if (ch == 57)
		{
			continue;
		}
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
