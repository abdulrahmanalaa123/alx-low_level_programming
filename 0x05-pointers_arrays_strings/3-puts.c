#include "main.h"
/**
 *Description: _puts - description for task.
 *@str: string
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str = str+1;
	}
	_putchar('\n');
}
