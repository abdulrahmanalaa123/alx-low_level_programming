#include <stdio.h>
#include <stdlib.h>
/**
 *Description: main - description for task.
 *
 *@argc: number of arguments for func
 *@argv: arguments
 *
 *Return: 0 as a default return value
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	int mult;
	int i;
	int k;

	mult = 1;
	for (i = 1; i < argc; i++)
	{
		k = atoi(argv[i]);
		mult = mult * k;
	}
	printf("%d\n", mult);
	return (0);
}
