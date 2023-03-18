#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main-This is the main function
* Description: Prints the lower case alphabet from reverse order
* Return: Always 0 (Success)
*/
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{

	putchar(i);
	}
	putchar('\n');
	return (0);
}
