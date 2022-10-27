#include "main.h"

/**
 * cap_string - capitalizes words
 * @str: string
 * Return: pointer to string
 */
char *cap_string(char *str)
{
	int k = 0;

	while (str[k])
	{
		while (!(str[k] >= 'a' && str[k] <= 'z'))
			k++;
		{

			if (str[k - 1] == ' ' ||
		if (str[k - 1] == '\t' ||
		if (str[k - 1] == '\n' ||
		if (str[k - 1] == ',' ||
		if (str[k - 1] == ';' ||
		if (str[k - 1] == '.' ||
		if (str[k - 1] == '!' ||
		if (str[k - 1] == '?' ||
		if (str[k - 1] == '"' ||
		if (str[k - 1] == '(' ||
		if (str[k - 1] == ')' ||
		if (str[k - 1] == '{' ||
		if (str[k - 1] == '}' ||
		k == 0)
		str[k] -= 32;

		k++;
	}

	return (str);
}
