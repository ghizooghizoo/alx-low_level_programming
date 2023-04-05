#include "main.h"

/**
 * strlen_recursion - return the length of a string
 *
 * @s: string
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (_strelen_recursion(s + 1) + 1);
	return (0);
}
