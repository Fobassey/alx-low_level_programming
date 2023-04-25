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
		for (sh = 49; sh <= 57; sh++)
		{
			if (sh > ch)
			{
				putchar(ch);
				putchar(sh);
				if (ch != 56 || sh != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
