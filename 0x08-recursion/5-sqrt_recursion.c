int helper(int n, int i);

/**
 * _sqrt_recursion - Calculates the natural square oot of a number
 * @n: The number for which to calculate the square root
 *
 * Return: The natural square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (helper(n, 1));
}

/**
 * helper - Helper function to find the square root recursively
 * @n: The number for which to calculate the square root
 * @i: The current value to check as the square root
 *
 * Return: The natural squre root of n
 */
int helper(int n, int i)
{
	if (i * i == n)
		return (i);

	if (i * i > n)
		return (-1);

	return (helper(n, i + 1));
}
