#include <unistd.h>
#include "main.h"
/**
 * main - program prints _putchar
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar\n"
	int i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], i);
		i++
	}

	return (0);
}
