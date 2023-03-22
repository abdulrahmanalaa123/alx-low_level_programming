#include <stdio.h>
/**
 *Description: main - description for task.
 *
 *Return: 0 as a default return value
 */
int main(void)
{
	char s[] = "trying testing";
	int len = sizeof(s)/sizeof(s[0]);
       	printf("%d\n",len);
	printf("%lu\n",sizeof(s));	
	return (0);
}
