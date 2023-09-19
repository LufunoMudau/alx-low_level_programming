#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to write
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * str_length - Computes the length of a string
 * @s: The input string
 *
 * Return: The length of the string
 */
int str_length(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: The input string
 */
void print_rev(char *s)
{
	int length = str_length(s);

	for (int i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char str[] = "Hello, world!";

	print_rev(str);

	return (0);
}
