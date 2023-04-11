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
	int sum;
	int i;
	int k;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		k = _atoi(argv[i]);
		if (k == -938)
		{
			printf("Error\n");
			return (1);
		}
		sum  = sum + k;
	}
	printf("%d\n", sum);
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
		if ((str[i] - '0') > 9)
			return (-938);
		res = (res * 10) + (str[i] - '0');
	}
	return (res * sign);
}
