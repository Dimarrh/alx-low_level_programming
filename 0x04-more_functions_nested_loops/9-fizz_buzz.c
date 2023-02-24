#include <stdio.h>
/**
 * main - prints fizz buzz
 * Return: returns answer
 */
int main(void)
{
	int i = 1;

	while (i < 100)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			(i == 100) ? printf("FizzBuzz\n") : printf("FizzBuzz ");
		}
		else if ((i % 5) == 0)
		{
			(i == 100) ? printf("Buzz\n") : printf("Buzz");
		}
		else if ((i % 3) == 0)
		{
			(i == 100) ? printf("Fizz\n") : printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
		i++;
	}
	printf("\n");
	return (0);
}

