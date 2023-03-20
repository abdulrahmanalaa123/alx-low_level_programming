#include <stdio.h>
/**
 *Description: main - description for task.
 *
 *Return: 0 as a default return value
 */
int main(void)
{
	char letter;
	char lette2;

	for (letter = '0'; letter <= '9'; letter++)
		putchar(letter);


	for (lette2 = 'a'; lette2 <= 'f'; lette2++)
		putchar(lette2);

	putchar('\n');

	return (0);
}
