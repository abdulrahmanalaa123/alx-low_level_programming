#include "main.h"
/**
 *Description: print_sign - description for task.
 *@c: int to be checked
 *Return: 0 as a default return value
 */
int print_sign(int c)
{
	if (c > 0)
		return (1);
	else if (c == 0)
		return (0);
	else
		return (-1);
}
