#include <stdio.h>

/**
 * main - prints the numbers in 16
 *Return: Always 0
 */
int main(void)
{
	int num;
	char tr;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (tr = 'a'; tr <= 'f'; tr++)
		putchar(tr);

	putchar('\n');

	return (0);
}
