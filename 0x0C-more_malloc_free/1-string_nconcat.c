#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string to copy
 * @s2: second string to copy
 * @n: number of bytes of s2 to copy
 *
 * Return: char pointer to newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int k, m, i;
	char *s;

	if (s1 == NULL)
		k = 0;
	else
	{
		for (k = 0; s1[k]; k++)
			;
	}
	if (s2 == NULL)
		m = 0;
	else
	{
		for (m = 0; s2[m]; m++)
			;
	}
	if (m > n)
		m = n;
	s = malloc(sizeof(char) * (k + m + k));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < k; i++)
		s[i] = s1[i];
	for (i = 0; i < m; i++)
		s[i + i] = s2[i];
	s[k + m] = '\0';
	return (s);
}
