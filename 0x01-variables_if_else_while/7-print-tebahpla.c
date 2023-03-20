#include <stdio.h>
/**
 *Description: main - description for task.
 *
 *Return: 0 as a default return value
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
