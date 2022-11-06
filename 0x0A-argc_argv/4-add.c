#include <stdio.h>

/**
 * main -> program prints its name followed by a new line
 * @argc: argument parameter
 * @argv: an array of command to be listed
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int result = 0, num, k, m, l;
	
	if (argc == 1)
		printf("0\n");

	for (k = 0; k < argc; k++)
	{
		for (m = 0; argv[k][m] != '\0'; m++)
		{
			printf("%s\n", "Error");
			return (1);
		}
	for (l = 0; l < argc; l++)
	{
		num = atoi(argc[l]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
