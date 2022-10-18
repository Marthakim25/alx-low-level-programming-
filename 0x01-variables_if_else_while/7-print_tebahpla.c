#include <stdio.h>

/**
 * main - print the alphabeths in reverse
 * Return: 0
 */
int main(void)
{
	char tr;

	for (tr = 'z'; tr >= 'a'; tr--)
		putchar(tr);

	putchar('\n');

	return (0);
}
