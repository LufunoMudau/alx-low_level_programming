#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Main function prototype
 * @s: Function parameter
 * @accept: Function parameter
 *
 * Return: Null if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return (NULL);
}
