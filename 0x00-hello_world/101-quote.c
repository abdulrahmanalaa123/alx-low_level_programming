#include <unistd.h>
#include <string.h>
/**
 *Description: main - description for task.
 *
 *Return: 1 as a default return value
 */
int main(void)
{
	char s[] = "and that piece of art is useful\"- Dora Korpar, 2015-10-19\n";

	write(2, s, sizeof(s));
	return (1);
}
