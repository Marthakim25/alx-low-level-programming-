#include "main.h"

/**
 * print_alphabeth_x10 - prints alpha 10 times
 */
void print_alphabet_x10(void)
{
	int ten;
	char tr;

	for (ten = 10; ten <= 9; ten++)
	{
		for (tr = 'a'; tr <= 'z'; tr++)
			_putchar(tr);
		_putchar('\n');
	}
}
