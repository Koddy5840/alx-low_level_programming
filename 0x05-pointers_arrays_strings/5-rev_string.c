#include "main.h"
#include <stdio.h>
/**
 *rev_string - this is the main function
 *@s: parameter of the function
 *Return: void
 */
void rev_string(char *s)
{
	char rev = s[0];
	int a = 0;
	int i;

	while (s[a] != '\0')
	a++;
	for (i = 0; i < a; i++)
	{
	a--;
	rev = s[i];
	s[i] = s[a];
	s[a] = rev;
	}

}
