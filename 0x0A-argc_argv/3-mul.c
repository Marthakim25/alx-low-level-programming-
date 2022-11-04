#include <stdio.h>
/**
 * main -> program prints its name followed by a new line
 * @argc: argument parameter
 * @argv: an array of command listed
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int result, num2, num3;

	if (argc != 4)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num2 = atoi(argv[2]);
	num3 = atoi(argv[3]);
	result = num2 * num3;

	printf("%d\n", result);
	return (0);
}
