#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/**
 * main -> assign a random number to the variable n each time it is executed
 * Return: always 0 (SUCCESS)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar (letter);

	putchar('\n');

	return (0);
}
