#include <stdio.h>
/**
 * main - list all natural numbers below 10 that are
 * multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23
 * Return: 0 (success)
 */

int main(void)
{
	int i, z = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || i % 5 == 0)
		{
			z += i;
		}
		i++;
	}
	printf("%d\n", z);
	return (0);
}
