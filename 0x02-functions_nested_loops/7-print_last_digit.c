/**
 * _putchar - Custom function to print a character
 * @c: The character to be printed
 */
void _putchar(char c);

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to find the last digit of
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		last_digit = -1 * (n % 10);
	else
		last_digit = n % 10;

	_putchar(last_digit + '0');

	return (last_digit);
}
