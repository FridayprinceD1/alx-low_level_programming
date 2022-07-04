#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char ch;
	for (ch = 'z'; ch >= 'a'; ch++)
	{
		putchar(ch);
	}
	putchar(10); /*ascii code for  a new line */
	return (0);
}
