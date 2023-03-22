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
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			if (k <= 9)
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(48 + k);
			}
			else
			{
				_putchar(' ');
				_putchar(48 + k / 10);
				_putchar(48 + k % 10);
			}
			if (j != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
