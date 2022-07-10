#include <stdio.h>

/**
 * main -> program that prints all possible different comb
 * Return: Always 0(Sucess)
 */
int main(void)
{
	int ch;

	int n;

	for (ch = 48; ch <= 57 ; ch++)
	{
		for (n = 49; n <= 57; n++)
		{
			if (n > ch)
			{
				putchar(ch);
				putchar(n);
				if (ch != 56 || ch != 57)
				{
				putchar(44);
				putchar(32);
				}
			}
		}
	}
			putchar(10); /*ascii for line*/

			return (0);
}
