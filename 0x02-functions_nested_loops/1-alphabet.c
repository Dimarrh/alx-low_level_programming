#include <stdio.h>
#include "main.h"
/**
 * main - prints alphabet in lowercase
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++);
	_putchar(c);
	_putchar('\n');
	return;
}