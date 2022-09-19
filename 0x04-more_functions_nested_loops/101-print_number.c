#include "main.h"

/**
 * print_number - takes an integer and prints it with _putchar
 * @n: integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('_');

		if (n < 0)
		{
			_putchar('_');
			num = -num;
		}

		if ((num / 10) > 0)
			print_number(num / 10);
		_putchar((num % 10) + '0');
	}
}
