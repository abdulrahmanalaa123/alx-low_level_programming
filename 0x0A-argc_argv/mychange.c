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
	int k;
	int i;
	int repet;
	int univ;
	int j[] = {25, 10, 5, 2, 1};

	repet = 0;
	k = atoi(argv[1]);
	i = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (k < 0)
	{
		printf("0\n");
	}
	else
	{
		while (k != 0 && i < 5)
		{
			univ = k / j[i];
			k = k % j[i];
			repet += univ;
			i++;
		}
		printf("%d\n", repet);
	}
	return (0);
}
