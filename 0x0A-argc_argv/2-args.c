#include <stdio.h>

/**
 * main -> program prints its name followed by a new line
 * @argc: argument parameter
 * @argv: an array of command listed
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc; k++)
	{
		printf("%s\n", argv[k]);
	}
	return (0);
}
