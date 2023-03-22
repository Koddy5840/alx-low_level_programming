#include <stdio.h>
/**
 *main - this is the main function
 *Description: prints multiples of 5 and 3 and sum them
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; i < 1024; i++)
	{
	if (i % 3 == 0 || i % 5 == 0)
	{
	sum = sum + i;
	}
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
