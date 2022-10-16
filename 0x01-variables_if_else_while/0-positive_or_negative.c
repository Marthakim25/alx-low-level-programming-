#include <stdio.h>
#include <stlib.h>
#include <time.h>

/**
 * main - prints if the number is positive,negative or 0
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("Nd is positive\n", n);
	}
	else if (n == 0)
	{
		printf("Nd is zero\n", n);
	}
	else
	{
		printf("Nd is negative\n", n);
	}

	return (0);
}
