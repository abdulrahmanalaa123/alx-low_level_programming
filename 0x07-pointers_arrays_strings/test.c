#include "main.h"
#include <stdio.h>
/**
 *Description: main - description for task.
 *
 *Return: 0 as a default return value
 */
char *_memset(char *s, char b, unsigned int n);
int main(void)
{
	char b = '5';
	char s[] = "hello and this is a test string";
	
	printf("%s\n",_memset(s,b,15));
	return (0);
}

char *_memset(char *s, char b, unsigned int n)
{
	char *p;
	int i;

	p = s;
	for (i = 0; i < n; i++)
	{
		*s = b;
		s ++;
	}

	return(p);
}

