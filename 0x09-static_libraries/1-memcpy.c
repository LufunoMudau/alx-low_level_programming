#include "main.h"

/**
 * _memcpy - Main function prototype
 * @dest: Destination parameter
 * @src: Source parameter
 * @n: Function parameter
 *
 * Return: Copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
