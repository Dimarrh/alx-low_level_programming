#include <stdio.h>
/**
 * jack_bauer - program that prints every minute of the day of Jack Bauer
 *
 * Return: 0 (Success)
 */
void jack_bauer(void)
{
int i, j, k, x;
for (i = 0; i <= 2; i++)
{
if (i == 2)
{
for (j = 0; j <= 3; j++)
{
for (k = 0; k <= 5; k++)
{
for (x = 0; x <= 9; x++)
{
printf("%d%d:%d%d\n", i, j, k, x);
}
}
}
}
else
{
{
for (j = 0; j <= 9; j++)
{
for (k = 0; k <= 5; k++)
{
for (x = 0; x <= 9; x++)
{
printf("%d%d:%d%d\n", i, j, k, x);
}
}
}
}
}
}
return;
}
