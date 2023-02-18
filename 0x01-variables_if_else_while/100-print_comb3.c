#include <stdio.h>
/**
 * main - Prints combinationof numbers
 *
 * Return: result
*/
int main(void)
{
	int i, l;
	for (i = '0'; i <= '9'; i++)
	{
	for (l = '0'; l <= '9'; l++)
	{
	if (i < l)
	{
	putchar(i);
	putchar(l);
	if (i != '8' || l <='8')
	{
	putchar(',');
	putchar('');
	}
	}
	}
	}
}

