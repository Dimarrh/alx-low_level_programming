#include "main.h"
/**
 * print_numbers - prints number from 0 to 9
 *
 * Return: 0 to 9
 */
void print_numbers(void)
{
	char i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
