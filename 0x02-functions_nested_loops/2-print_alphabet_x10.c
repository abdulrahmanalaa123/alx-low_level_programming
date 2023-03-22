#include "main.h"
/**
 *Description: main - description for task.
 *
 *Return: 0 as a default return value
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
		for(c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
}
