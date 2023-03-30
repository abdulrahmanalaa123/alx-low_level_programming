#include "main.h"
/**
 *Description: _strncpy - description for task.
 *@dest: string to append to
 *@src: string to be appended
 *@n: integer limiting append function
 *Return: string as a default return value
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr;
	int i;

	ptr = dest;
	for (i = 0; i < n && *src; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
