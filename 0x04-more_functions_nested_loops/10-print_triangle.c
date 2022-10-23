#include "main.h"

/**
 * print_triangle - prints a triangle
 * @n: size of the triangle
 */
void print_triangle(int n)
{
	int t, tri;

	if (n > 0)
	{
		for (n = 1; t <= n; t++)
		{
			for (tri = n - t; tri > 0; tri--)
				_putchar(' ');

			for (tri = 0; tri < t; tri++)
				_putchar('#');

			if (t == n)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
