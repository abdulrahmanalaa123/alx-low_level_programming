#include "main.h"
/**
 *Description: print_to_98 - description for task.
 *@n:integer to go to
 *Return: 0 as a default return value
 */
void print_to_98(int n)
{
	int k;

	while (n != 98)
	{
		int k = n;
		while(k != 0)
			_putchar(48 + k / 10);
			k = k / 10;
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
