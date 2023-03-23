#include "main.h"

int _log(int a, int b);
int _pow(int a, int b);
/**
 *Description: print_times_table - description for task.
 *@n: okfwok
 *Return: 0 as a default return value
 */
void print_times_table(int n)
{
	int i;
	int j;
	int k;
	int m;
	int f;

	for (i = 0; i <= 12; i++)
	{
		for (j = 0; j <= 12; j++)
		{
			k = i * j;
			repeat = _log(k, 10);
			for (m = 0; m < (_log((12 * 12), 10) - repeat); m++)
				putchar(' ');
			for (f = 0; f < _log(k); f++)
				_putchar(48 + (k % _pow(10, f + 1)) / _pow(10, f)
			if (j != 12)
				_putchar(',');
		}
		_putchar('\n');
	}
}
/**
 *Description: _log - log for values.
 *@a:number
 *@b:base
 *Return: 0 as a default return value
 */
int _log(int a, int b)
{
	int v;

	while (a != 0)
		a = a / b;
		v++;

	return (v);
}
/**
 *Description: _pow - log for values.
 *@a:number
 *@b:power
 *Return: 0 as a default return value
 */
int _pow(int a, int b)
{
	int m;
	int prod = 1;

	for (m = 0; m < b; m++)
		prod = prod * a;

	return (prod);
}
