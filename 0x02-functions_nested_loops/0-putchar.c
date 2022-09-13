#include "main.h"

/**
 * print_aplphabet - print alphabet
 * Return: void
 */
void print_alphabet(void)
{
	char latter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
