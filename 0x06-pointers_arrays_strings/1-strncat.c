#include "main.h"
/**
 *Description: _strncat - description for task.
 *@dest: string to append to
 *@src: string to be appended
 *@n: integer limiting append function
 *Return: string as a default return value
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr;
	int i;

	ptr = dest;
	while (*dest)
	{
		dest++;
	}
	for (i = 0; i < n && !(*src); i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
