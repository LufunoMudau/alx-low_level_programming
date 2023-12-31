#include <unistd.h>

/**
 * _putchar - Custom function to print a character
 * @c: The character to be printed
 */
void _putchar(char c);

/**
 * print_number - Prints a number
 * @n: The number to be printed
 */
void print_number(int n)
{
	if (n < 10)
		_putchar(' ');
	else
		_putchar((n / 10) + '0');

	_putchar((n % 10) + '0');
}

/**
 * times_table - Prints the 9 times table starting with 0
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;

			if (j == 0)
				print_number(result);
			else
			{
				_putchar(',');
				_putchar(' ');

				print_number(result);
			}
		}
		_putchar('\n');
	}
}
