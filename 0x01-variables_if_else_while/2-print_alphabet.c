#include <stdio.h>
/*
 * main - Prints alphabet
 *
 * Return: result
*/
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
