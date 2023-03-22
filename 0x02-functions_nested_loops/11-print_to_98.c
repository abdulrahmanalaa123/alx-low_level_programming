#include "main.h"
/**
 *Description: print_to_98 - description for task.
 *@n:integer to go to
 *Return: 0 as a default return value
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n >= 10)
			_putchar(48 + n / 10);
		_putchar(48 + n % 10);
		_putchar(',');
		_putchar(' ');
		if (n > 98)
			n--;
		else
			n++;
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
