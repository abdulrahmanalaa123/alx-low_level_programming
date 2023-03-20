#include <stdio.h>
/**
 *Description: main - description for task.
 *
 *Return: 0 as a default return value
 */
int main(void)
{
	for (char letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (char lette2 = 'A'; lette2 <= 'Z'; lette2++)
		putchar(lette2);

	putchar('\n');

	return (0);
}
