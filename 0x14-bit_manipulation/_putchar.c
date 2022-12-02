#include "main.h"
# <unistd.h>

/**
 * _putchar - writes the character to stoudt
 * @c: the character to be printed
 *
 * Return: on success 1
 * on error, -1 is returned and errno is set appropriately
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
