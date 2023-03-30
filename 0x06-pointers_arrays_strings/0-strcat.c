#include "main.h"
/**
 *Description: _strcat - description for task.
 *@dest: destination
 *@src: string to be appended
 *Return: string
 */

char *_strcat(char *dest, char *src)
{
	char *ptr;

	ptr = dest;
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
