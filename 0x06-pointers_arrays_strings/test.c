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
	printf("%p\n",string);
	char *ptr = _strncpy(string,string2,50);
	printf("%s and address of: %p\n",string2,ptr);
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
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr;
	int i;

	ptr = dest;
	for (i = 0; i < n && *(src + i); i++)
	{
		printf("%p\n",dest);
		*dest = *(src + i);
		dest++;
	}
	while (i < n)
	{
		*dest = '\0';
		i++;
		dest++;
	}
	return (ptr);
}
