#include <stdio.h>
#include "main.h"
/**
 * print_alpahbet_x10 - prints
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	char c;
	int numOfIterations = 10;
	for (i = 0; i < numOfIterations; i++)
	{
	for (c = 'a'; c <= 'z'; c++)
	_putchar(c);
	_putchar('\n');
	}
	return;
}
