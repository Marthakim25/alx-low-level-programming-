#include <stdio.h>

/**
 * main - prints all combination of single digits
 * Return: Always 0
 */
int main(void)
{
	int s;

	for (s = 48; s < 58; s++)
	{
		putchar(s);
		if (s != 57)
		{
			putchar(',');
			putchar(' ');
		}
	putchar('\n');

	return (0);
}
