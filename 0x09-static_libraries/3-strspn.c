#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string we look at
 * @accept: the compared string
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int k = 0;
	int m = 0;

	for (; s[k]; k++)
	{
		for (m = 0; accept[m]; m++)
		{
			if (s[k] == accept[m])
			{
				break;
			}
		}
			if (s[k] != accept[m])
			break;
	}

	return (k);
}
