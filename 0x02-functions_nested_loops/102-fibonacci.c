#include <stdio.h>
/**
 * main - the main function
 *
 * Return: 0
 */
int main(void)
{
	unsigned long n1 = 1;
	unsigned long n2 = 2;
	unsigned long current_fib;
	int i;

	printf("%lu, %lu, ", n1, n2);
	for (i = 1; i <= 48; i++)
	{
		current_fib = n1 + n2;
		if (i == 48)
			printf("%lu", current_fib);
		else
			printf("%lu, ", (current_fib));
		n1 = n2;
		n2 = curret_fib;
	}

	return (0);
}
