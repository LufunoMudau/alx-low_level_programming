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
			{
				_putchar('0');
			}
			else
			{
				_putchar(' ');
				if (result < 10)
					_putchar(' ');

				print_number(result);
			}

			if (j < 9)
				_putchar(',');
			else
				_putchar('\n');
		}
	}
}

/**
 * print_number - Prints a number
 * @n: The number to be printed
 */
void print_number(int n)
{
	if (n == 0)
		return;

	print_number(n / 10);
	_putchar((n % 10) + '0');
}
