#include "main.h"

/**
 * reverse_array - The main function of the prototype
 * @a: Function parameter
 * @n: Function parameter
 *
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
