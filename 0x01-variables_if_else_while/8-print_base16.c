#include <stdio.h>
/**
 * prints all the numbers of base 16 in lowercase, followed by a new line.
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	/**
	 * hexadecimal
	 * 1 2 3 4 5 6 7 8 9 a b c d e f
	 */
	char ch;
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
