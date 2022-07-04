#include <stdio.h>

/*
 * main ->  a program that prints all possible combinations of single-digit numbers.
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	int ch;
	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
		if (ch != 57)
		{
			putchar(44);
			putchar(32);
		}

		putchar(10); /*this is ascii coode for line*/
		return (0);
}

