#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Main Function
 * @a: Function parameter
 * @size: Function parameter
 *
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int count1 = 0;
	int count2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		count1 += a[i * size + i];
	}

	for (i = 0; i < size; i++)
	{
		count2 += a[i * size + (size - i - 1)];
	}

	printf("Sum of the main diagonal: %d\n", count1);
	printf("Sum of  the anti-diagonal: %d\n", count2);
}

