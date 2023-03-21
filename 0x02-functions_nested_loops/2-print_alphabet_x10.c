#include "main.h"
/**
 *print_alphabet_x10 - main function
 *Return; always void print_alphabet_x10(void)
*/

void print_alphabet_x10(void)
{
	int a;
	int b;

	for (a = 1; a <= 10; a++)
	{
	for (b = 'a'; b <= 'z'; b++)
	{
	_putchar(b + 0);
	}
	_putchar('\n');
	}
}
