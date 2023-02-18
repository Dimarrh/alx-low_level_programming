#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: result
*/

int main(void)
{
	int hun = 0;

	int tens = 1;
	int unit = 2;

	while (hun < 8)
	{
		int i = tens;
		int j = unit;

		while (tens <= 8 && i <= 8)
		{
			int k = j;

			while (unit <= 9 && k <= 9)
			{
				if (i != k)
				{
					putchar(hun + '0');
					putchar(i + '0');
					putchar(k + '0');
					if (hun < 7)
					{
						putchar(',');
						putchar(' ');
					}
				}

				k++;
			}
			i++;
			j++;
		}
		unit++;
		tens++;
		hun++;
	}
	putchar('\n');
	return (0);
}
