#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main-prints lowercase a-z
 * Return: returns the value zero
 */
int main(void)
{

	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			continue;
		}
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
