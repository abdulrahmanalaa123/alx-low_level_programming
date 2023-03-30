#include "main.h"
#include <stdio.h>
/**
 *Description: main - description for task.
 *
 *Return: 0 as a default return value
 */
int main(void)
{
	char string[] = "hello";
	char string2[] = "andappended";

	printf("%s\n",_strcat(string,string2));
	return (0);
}

char *_strcat(char *dest, char *src)
{
	char *ptr;

	ptr = dest;
	printf("%p\n",ptr);
	printf("%p\n",dest);
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
char *_strncat(char *dest, char *src, int n)
{
	char *ptr;
	int i;

	ptr = dest;
	printf("%p\n",ptr);
	printf("%p\n",dest);
	while (*dest)
	{
		dest++;
	}
	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
