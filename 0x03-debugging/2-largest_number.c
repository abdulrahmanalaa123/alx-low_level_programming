#include "main.h"
/**
 *Description: largest_number - description for task.
 *@a: first
 *@b: second
 *@c: third
 *Return: larget numb
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
		largest = a;
	else if (b >= a && b >= c)
		largest = b;
	else
		largest = c;

	return (0);
}
