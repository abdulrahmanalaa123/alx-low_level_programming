#include "main.h"
/**
 *Description:swap_int - description for task.
 *@a:integer 1
 *@b:integer 2
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
