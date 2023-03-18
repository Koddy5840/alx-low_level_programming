#include <stdio.h>
/**
 * main - This is the main function
 * Description: a program to print all numbers of base 16
 * Return: always 0 (success)
 */
int main(void)
{
	char a;
	char b;

	for (a = 0; a <= 9; a++)
	{
	putchar(a + 48);
	}
	for (b = 'a'; b <= 'f'; b++)
	{
	putchar(b);
	}
	putchar('\n');

	return (0);
}
