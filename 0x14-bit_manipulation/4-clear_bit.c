#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - Program sets value of a bit to 0 at a given index
 * @n: Parameter
 * @index: Index
 *
 * Return: 1 (Success), -1 (Error)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
