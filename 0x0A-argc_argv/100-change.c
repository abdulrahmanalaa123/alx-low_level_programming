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
	int j[] = {25, 10, 5, 2};

	repet = 0;
	k = atoi(argv[1]) * 100;
	i = 0;
	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	while (k != 0)
	{
		univ = k / j[i];
		if (k % j[i] == 0)
		{
			repet = repet + univ;
			/*decalring with 0 instead of break*/
			k = 0;
			break;
		}
		else
		{
			k = k - (j[i] * univ);
			repet = repet + univ;
			i++;
		}
	}
	printf("%d\n", repet);
	return (0);
}
