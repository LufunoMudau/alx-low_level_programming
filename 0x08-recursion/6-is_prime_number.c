/**
 * is_prime_helper - Helper function to check primality recursively
 * @n: The number to check for primality
 * @i: The currnt divisor to check
 *
 * Return: 1 if the number is prime, o otherwise
 */
int is_prime_helper(int n, int i);

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check for primality
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - Helper function to check primality recursively
 * @n: The number to check for primality
 * @i: The currnt divisor to check
 *
 * Return: 1 if the number is prime, o otherwise
 */
int is_prime_helper(int n, int i)
{
	if (i == n)
		return (1);

	if (n % i == 0)
		return (0);

	return (is_prime_helper(n, i + 1));
}
