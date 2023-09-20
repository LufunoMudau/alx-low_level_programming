/**
 * _putchar - Custom function to print a character
 * @c: The character to be printed
 */
void _putchar(char c);

/**
 * jack_bauer - Prints every minute of the day in the format "HH:MM"
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
