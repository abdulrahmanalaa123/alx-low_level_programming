#include <stdio.h> 
/**
 *Description: _strlen - description for task.
 *@s: string
 *Return: len length of the string
 */
int main(void)
{
	int i,len;
	char s[]="hello";

	int d;

	len = 0;

	while (s[len])
		len++;

	printf("%d\n",len);
	for (i = 0; i <= len/2; i++)
	{
		d = s[len-i];	
		s[len-i] = s[i-1];
		s[i-1] = d;
		printf("%c\n",s[len-i]);
	}
	printf("%s\n",s);

	return (0);
}
