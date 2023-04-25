#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main-prints number zero to nine
 * Return: returns the value zero
 */
int main(void)
{
        int a;
        int b;
	int c;

        for (a = 48; a <= 57; a++)
        {
                for (b = 49; b <= 57; b++)
                {
			for (c = 50; c <= 57; c++) 
			{
                        if (c > b || c > a)
                        	{			
                                	putchar(a);
                                	putchar(b);
					putchar(c);
                                	if (a != 55 || b != 56)
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
}
