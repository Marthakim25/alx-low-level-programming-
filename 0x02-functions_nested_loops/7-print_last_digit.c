#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int tr = n % 10;

	if (tr < 0)
		tr *= 1;

	_putchar(tr + '0');

	return (0);
}
