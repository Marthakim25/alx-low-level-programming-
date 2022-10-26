#include "main.h"

/**
 * _strncat - joins two strings with a bytes
 * @dest: copy to
 * @src: copy from
 * @n: number of char to be copied
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int k;
	int m;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	m = 0;
	while (m < n && src[m] != '\0')
	{
		dest[k] = dest[m];
		k++;
		m++;
	}
	dest[k] = '\0';
	return (dest);
}
