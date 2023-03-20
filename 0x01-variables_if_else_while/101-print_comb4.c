#include <stdio.h>
/**
 *Description: main - description for task.
 *
 *Return: 0 as a default return value
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
		for (j = i + 1; j <= 9; j++)
			for (k = j + 1; k <= 9; k++)
			{
				putchar(48 + i);
				putchar(48 + j);
				putchar(48 + k);

				if (i == 8 && j == 9)
					continue;

				putchar(',');
				putchar(' ');
			}

	putchar('\n');

	return (0);
}
