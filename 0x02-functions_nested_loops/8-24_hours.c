#include "main.h"
/**
 *Description: jack_bauer - description for task.
 *
 *Return: 0 as a default return value
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
		for (j = 0; j < 60; j++)
		{
			_putchar(48 + i / 10);
			_putchar(48 + i % 10);
			_putchar(':');
			_putchar(48 + j / 10);
			_putchar(48 + j % 10);
			_putchar('\n');
		}
}
