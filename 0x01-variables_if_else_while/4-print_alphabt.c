#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, * followed by a new line, except q and e
 * Return: Aways 0 (Sucess)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
