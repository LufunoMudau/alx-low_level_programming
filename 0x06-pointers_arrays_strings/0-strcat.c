/**
 * str_concat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 *
 * Returun: Pointer to the resulting string (dest)
 */
char *str_concat(char *dest, const char *src)
{
	char *result = dest;

	/* Move dest to the end of the destination string */
	while (*dest)
		dest++;

	/* Append the source string to the destination */
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	/* Add a terminating null byte */
	*dest = '\0';

	return (result);
}
