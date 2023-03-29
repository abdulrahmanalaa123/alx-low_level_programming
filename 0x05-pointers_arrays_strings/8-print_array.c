#include "main.h"
#include <stdio.h>
/**
 * print_array - prints every other character of a string
 *
 * @a: str of choice
 * @n: amount to print
 * Return: 0 is success
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i <= n - 1)
			printf("%d, ", *(a + i));
		else
			printf("%d", *(a + i));
	}
	_putchar('\n');
}
