#include <stdio.h>
/**
 *Description: main - description for task.
 *
 *Return: 0 as a default return value
 */
int main(void)
{
	int len;
	char s[] = "trying testing"
	len = sizeof(s)/sizeof(s[0]);
       	printf(len);
	printf(sizeof(s));	
	return (0);
}
