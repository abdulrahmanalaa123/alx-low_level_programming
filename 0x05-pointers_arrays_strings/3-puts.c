#include "main.h"
/**
 *Description: _puts - description for task.
 *@str: string
 */
void _puts(char *str)
{
	_putchar(*str);

	while (*++str)
		_putchar(*str);

	_putchar('\n');
}
