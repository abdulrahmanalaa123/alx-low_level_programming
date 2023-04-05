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
	char *p;
	int i;

	p = s;
	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}

	return (p);
}

