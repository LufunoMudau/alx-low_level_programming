#include "main.h"
#include <stddef.h>

/**
 * _strstr - Main function prototype
 * @haystack: Function parameter
 * @needle: Function parameter
 *
 * Return: NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
			}

			if (needle[j] == '\0')
				return (haystack + i);
		}
	}

	return (NULL);
}
