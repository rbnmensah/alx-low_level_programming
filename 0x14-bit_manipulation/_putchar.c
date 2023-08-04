#include "main.h"
#include <unistd.h>

/**
 * _putchar - Write to stdout
 * @c: The character to print
 *
 * Return: 1 (Success)
 * On error, print -1 and errno set appropraitely
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}
