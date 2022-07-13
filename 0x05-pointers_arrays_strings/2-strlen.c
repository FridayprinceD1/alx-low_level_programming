#include "main.h"

/**
 * _strlen - calculate lenght of string
 *@s: the string to calc lenght of string
 *Return: the lenght of string
 */

int _strlen(char *s)
{
	int len = 0;

	if (s)
	{
		while (*(s + len))
			++len;
	}
	return (len);
}
