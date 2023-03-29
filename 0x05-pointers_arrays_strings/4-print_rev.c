#include "main.h"
/**
 *Description: print_rev - description for task.
 *@s: string
 */
void print_rev(char *s)
{
	int i, n;

	i = 0;
	while (s[i])
	{
		i = i + 1;
	}
	for (n = i - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
