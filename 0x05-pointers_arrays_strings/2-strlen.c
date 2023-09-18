#include "main.h"
#include <stddeff.h>

/**
 * _strlen - Returns the length of a string
 *
 * @s: A pointer to a string
 *
 * Return: The lenght of the string
 */
int _strlen(char *s)
{
	int length = 0;

	if (s != NULL)
	{
		while (*s != '\0')
		{
			length++;
			s++;
		}
	}
}
