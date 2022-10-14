#include <stdio.h>
/**
 * main - is the entry point of the program
 *
 * Return: zero if no errors,Non-zero value if errors.
 */
int main(void)
{
	printf("Size of the char: %ld byte(s)\n", sizeof(char));
	printf("Size of a int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long: %ld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
