#include "main.h"
/**
 * more_numbers - Pritns 0 to 14 10 times
 *
 * Return: result
 */
void more_numbers(void)
{
	int count = 0;
	int i;

	while (count <= 9)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}

		_putchar('\n');
		count++;
	}
}
