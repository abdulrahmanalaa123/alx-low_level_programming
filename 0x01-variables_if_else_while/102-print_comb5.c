#include <stdio.h>
/**
 *Description: main - description for task.
 *
 *Return: 0 as a default return value
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
		for (j = i + 1; j <= 99; j++)
		{
			putchar(48 + i / 10);
			putchar(48 + i % 10);
			putchar(' ');
			putchar(48 + j / 10);
			putchar(48 + j % 10);

			if (i == 98 && j == 99)
				break;
			putchar(',');
			putchar(' ');
		}
	putchar('\n');

	return (0);
}
