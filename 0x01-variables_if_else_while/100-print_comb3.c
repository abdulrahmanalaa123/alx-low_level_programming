#include <stdio.h>
/**
 *Description: main - description for task.
 *
 *Return: 0 as a default return value
 */
int main(void)
{
	char i;
	char j;

	for (i = '0'; i <= '9'; i++)
		for (j = i + 1; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);

			if (i == '8' & j == '9')
				continue;

			putchar(',');
			putchar(' ');
		}


	putchar('\n');

	return (0);
}
