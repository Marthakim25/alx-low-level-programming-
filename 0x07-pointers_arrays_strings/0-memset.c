#include "main.h"
#include <stdio.h>

/**
 * _memset - fills the first n bytes of the memory area
 * pointed to by @s with the constant bytes @c
 * @s: a pointer to the memory area to be filled
 * @c: the character to be filled
 * @n: the number of bytes to be filled
 * description _memset: over there
 *
 * Return: a pointer to the filled memory area @s
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n++;
	}
	return (s);
}
