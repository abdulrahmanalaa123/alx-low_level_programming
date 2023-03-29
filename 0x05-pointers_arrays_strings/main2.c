#include <stdio.h> 
/**
 *Description: _strlen - description for task.
 *@s: string
 *Return: len length of the string
 */
int main(void)
{
	int len;
	char *s;

	s = "hello";
	len = 0;

	while (*s++)
		len++;

	printf("%d\n",len);

	return (0);
}
