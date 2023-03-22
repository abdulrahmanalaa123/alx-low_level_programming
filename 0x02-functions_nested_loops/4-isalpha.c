#include "main.h"
/**
 *Description: _isalpha - description for task.
 *@c: the character to be checker
 *Return: 0 as a default return value
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);

	return (0);
}
