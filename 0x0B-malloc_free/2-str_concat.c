#include "main.h"
#include <stdlib.h>

/**
 * _strlen - count array
 * @s: array of elements
 *
 * Return: 1
 */
int _strlen(char *s)
{
	unsigned int k;

	k = 0;
	while (s[k] != '\0') /*count character of string*/
	{
		k++;
	}

	return (k);
}

/**
 * str_concat - back a pointer to string
 * @s1: array one
 * @s2: array two
 * Return: Always on array dimanic
 */
char *str_concat(char *s1, char *s2)
{
	char *dst;
	unsigned int k, m, size;

	/*if the array is empty*/
	if (s1 == NULL)
		s1 = "";

	/*count size total*/
	size = (_strlen(s1) + _strlen(s2) + 1);

	/*malloc*/
	dst = (char *) malloc(size * sizeof(char));

	if (dst == 0)
	{
		return (NULL);
	}

	/*concatenate arrays*/
	for (k = 0; *(s1 + k) != '\0'; k++)
		*(dst + k) = *(s1 + k);

	for (m = 0; *(s2 + m) != '\0'; m++)
	{
		*(dst + m) = *(s2 + m);
		k++;
	}

	return (dst);
}
