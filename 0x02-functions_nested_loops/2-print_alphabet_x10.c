#include "main.h"

/**
 * print_alphabett_x10 - Prints lowercase alphabet ten times
 i*
 * Description: Function prints lowercase alphabet 'a' to 'z' ten times
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int i, count = 0;

	while (count < 10)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(letter + i);
		}
		_putchar('\n');
		count++;
	}
}
