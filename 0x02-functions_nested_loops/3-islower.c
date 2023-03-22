#include "main.h"
/**
 *Description: _islower - description for task.
 *@c: the character to be checker
 *Return: 0 as a default return value
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}
