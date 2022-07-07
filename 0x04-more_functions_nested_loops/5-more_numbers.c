#include "main.h"

/**
 * more_numbers - prints number 0 to 14 ten times
 * followed by a new line
 *
 * Return: Nothing
 */

void more_numbers(void)
{
	int i, j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');

		_putchar((i % 10) + '0');
		}

		_putchar('\n');
	}
}
