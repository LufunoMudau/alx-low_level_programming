int _putchar(char c);

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: Pointer to the string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
