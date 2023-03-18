#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main-This is the main function
 * Description: Prints the lower case alphabet
 * Return: Always 0 (Success)
*/
int main(void)
{
	char i, e, q;

	e = 'e';
	q = 'q';

	for (i = 'a'; i <= 'z'; i++)
	{
	if (i != 'e' && i != 'q')
	{
	putchar(i);
	}
	}
	putchar('\n');
	return (0);
}
