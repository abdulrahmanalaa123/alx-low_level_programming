#include "main.h"
/**
 *Description: times_table - description for task.
 *
 *Return: 0 as a default return value
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			_putchar(48 + k);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
	return (0);
}
