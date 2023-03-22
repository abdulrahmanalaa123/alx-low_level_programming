#include "main.h"
/**
 *Description: print_last_digit - description for task.
 *@c: integer to be printed
 *Return: 0 as a default return value
 */
int print_last_digit(int c)
{
	int k = c % 10;
	_putchar(k);

	return (k);
}
