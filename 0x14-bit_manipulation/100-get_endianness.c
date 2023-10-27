#include "main.h"

/**
 * get_endianness - Program checks the endianness
 *
 * Return: 0 if bid endian, 1 if little endian
 */
int get_endianness(void)
{
	int a;
	char *b;

	a = 1;
	b = (char *)&a;
	return (*b);
}
