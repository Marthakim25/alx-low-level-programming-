#include <stdio.h>
#include <stdlib.h>

/**
 * main -> program prints its name followed by a new line
 * @argc: argument parameter
 * @argv: an array of command to be listed
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int result = 0, num, k, m, p;

	for (k = 1; k < argc; k++)
	{
		for (m = 0; argv[k][m] != '\0'; m++)
		{
			if (argv[k][m] > '9' || argv[k][m] < '0')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
	}

	for (p = 1; p < argc; p++)
	{
		num = atoi(argv[p]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
