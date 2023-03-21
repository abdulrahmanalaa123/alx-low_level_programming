#include "main.h"
/**
 *Description: main - description for task.
 *
 *Return: 0 as a default return value
 */
int main(void)
{
	unsigned long int i;
	char s[] = "_putchar";

	for (i = 0; i < (sizeof(s) - 1); i++)
		_putchar(s[i]);

	_putchar('\n');
	return (0);
}
