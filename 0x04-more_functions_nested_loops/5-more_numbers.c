#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 9; j++)
	{
		for (i = 0; i < 14; i++)
			_putchar(i + '0');
		_putchar('\n');
	}
}
