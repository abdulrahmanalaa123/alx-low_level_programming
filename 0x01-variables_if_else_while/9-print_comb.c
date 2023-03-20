#include <stdio.h>
/**
 *Description: main - description for task.
 *
 *Return: 0 as a default return value
 */
int main(void)
{
	int letter;

	for (letter = '0'; letter <= '9'; letter++)
		putchar(letter);
		putchar(',');
		putchar(' ');

	putchar('\n');

	return (0);
}
