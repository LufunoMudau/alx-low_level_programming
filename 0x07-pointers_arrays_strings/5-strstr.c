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

	if (*needle == '\0')
		return haystack;

	while (*haystack)
	{
		if (*haystack == *needle)
		{
			i = 0;
			j = 0;

			while (needle[j] && (haystack[i] == needle[j]))
			{
				i++;
				j++;
			}

			if (needle[j] == '\0')
				return haystack;
		}
		haystack++;
	}

	return (NULL);
}
