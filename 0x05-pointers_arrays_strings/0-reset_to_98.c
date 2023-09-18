#include "main.h"
#include <stddef.h>

/**
 * reset_to_98 - Updates the value a pointer points to 98
 * @n: Pointer to an integer
 */
void reset_to_98(int *n)
{
	if (n != NULL)
		*n = 98;
}
