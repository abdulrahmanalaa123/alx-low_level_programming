#include <stdio.h>

int _atoi(char *str);
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
		k = _atoi(argv[i]);
		mult = mult * k;
	}
	printf("%d\n", mult);
	return (0);
}
/**
 *Description: _atoi - description for task.
 *@str: tring to be turned into an int
 *
 *Return: the value of the int
 */
int _atoi(char *str)
{
	int res;
	int i;
	int sign;

	sign = 1;
	res = 0;
	i = 0;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	for (; str[i] != '\0';  i++)
	{
		res = (res * 10) + (str[i] - '0');
	}
	return (res * sign);
}
