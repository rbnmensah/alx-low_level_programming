#include "main.h"

/**
 * _islower - Checks lowercase
 * @c: The character to be checked
 * Return: 1 for lowercase and 0 for any other thing.
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
