#include "main.h"
/**
 *Description: _memset - description for task.
 *@s: input string
 *@b: char to chagne
 *@n: number of changes
 *Return: 0 as a default return value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

