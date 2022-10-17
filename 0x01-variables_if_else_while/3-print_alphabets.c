#include <stdio.h>

/**
 * main - prints alphabeth in lower and upper case
 * Return: Always 0
 */
int main(void)
{
	char tr;


	for (tr = 'a'; tr <= 'z'; tr++)
		putchar(tr);


	for (tr = 'A'; tr <= 'Z'; tr++)
		putchar(tr);

	putchar('\n');

	return (0);
}
