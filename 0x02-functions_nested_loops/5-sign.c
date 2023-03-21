#include "main.h"

/**
 * print_sing - function that prints the sing of a number
 *
 * @n: integer
 *
 * Return: 1 is greater than zero, 0 is zero, -1 is less than zero
 */
int print_sing(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
