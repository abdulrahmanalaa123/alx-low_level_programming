#include <stdio.h>
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
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	int i;
	int mult;

	mult = 1;
	for (i = 0; i < argc; i++)
		mult = mult * argv[i];
	return (0);
}
