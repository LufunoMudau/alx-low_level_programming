#include "main.h"
#include <stddef.h>

/**
 * _puts - Prints a string followed by anew line
 * @str: A pointer to a string
 */
void _puts(char *str)
{
	if (str != NULL)
	{
		while (*str != '\0')
		{
			_puts(*str);
			str++;
		}
		_putchar('\n');
	}
}
