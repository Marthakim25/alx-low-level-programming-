#include <stdio.h>

/**
 * main -> program prints its name followed by a new line
 * @argc: argument parameter
 * @argv: an array of command listed
 * Return: 0 for success
 */
int main (int argc, char *argv[])
{
	printf("%s\n", *argv);
}
