#include <string.h>

/**
 * check_palindrome - Helper function
 * @s: The string to check
 * @start: The starting index of the current comparison
 * @end: The ending index of the current comparison
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int check_palindrome(char *s, int start, int end);

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if the string ia palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = strlen(s);

	return (check_palindrome(s, 0, length - 1));
}

/**
 * check_palindrome - Helper function
 * @s: The string to check
 * @start: The starting index of the current comparison
 * @end: The ending index of the current comparison
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	return (check_palindrome(s, start + 1, end - 1));
}
