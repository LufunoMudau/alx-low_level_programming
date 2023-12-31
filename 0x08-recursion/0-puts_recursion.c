int _putchar(char c);

/**
 * _puts_recursion - Prints a string
 * @s: Pointer to the string
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
