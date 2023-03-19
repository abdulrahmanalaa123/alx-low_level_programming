#include <unistd.h>
#include <string.h>
#include <stdio.h>
/**
 *Description: main - description for task.
 *
 *Return: 1 as a default return value
 */
int main(void)
{
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, s, 59);
	return (1);
}
