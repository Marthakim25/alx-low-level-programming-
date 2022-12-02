#include "main.h"

/**
 * set_bit - function that set values of a bit
 * to 1 at a given index
 * @n: pointer of an unsigned long int
 * @index: index of the int
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k;

	if (index > 63)
		return (-1);

	k = 1 << index;
	*n = (*n | k);

	return (1);
}
