#include "main.h"
/**
 *Description: _strlen - description for task.
 *@s: string
 *Return: len length of the string
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (++s)
		len++;

	return (len);
}
