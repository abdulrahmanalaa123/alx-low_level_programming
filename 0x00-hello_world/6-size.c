#include <stdio.h>
/**
 *Description: main - description for task.
 *
 *Return: 0 as a default return value
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float e;

	printf("Size of a char: %u byte(s)", sizeof(d));
	printf("Size of an int: %u byte(s)", sizeof(a));
	printf("Size of a long int: %u byte(s)", sizeof(b));
	printf("Size of a long long int: %u byte(s)", sizeof(c));
	printf("Size of a float: %u byte(s)", sizeof(e));
	return (0);
}
