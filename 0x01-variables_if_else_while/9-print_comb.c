#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-This is the main function
 * Description: Prints the lower case alphabet from reverse order
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
	putchar(a + 48);
	if (a != 9 && a != 10)
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
