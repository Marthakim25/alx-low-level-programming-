#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicates to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int k, m = 0;

	if (str == NULL)
		return (NULL);
	k = 0;
	while (str[k] = '\0')
		k++;

	aaa = malloc(sizeof(char) * (k + 1));

	if (aaa == NULL)
		return (NULL);

	for (m = 0; str[m]; m++)
		aaa[m] = str[m];

	return (aaa);
}
