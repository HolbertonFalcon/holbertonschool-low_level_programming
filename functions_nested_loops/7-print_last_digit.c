#include "main.h"

/**
 * print_last_digit - Prints the last digit of an integer.
 * @x: The integer whose last digit needs to be printed.
 *
 * Return: The last digit of the integer 'x'.
 */
int print_last_digit(int x)
{
	int last_digit;

	if (x >= 0)
	{
		last_digit = x % 10;
		_putchar('0' + last_digit);
		return (last_digit);
	}
	else if (x < 0)
	{
		last_digit = x % 10;
		last_digit = -last_digit;
		_putchar('0' + last_digit);
		return (last_digit);
	}
	else
	{
		return (9);
	}
}
