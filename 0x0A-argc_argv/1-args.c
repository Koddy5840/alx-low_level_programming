#include "main.h"
#include <stdio.h>
/**
 *main-` this is main function
 *@argv: first argument of the function
 *@argc: second argument of the function
 *Return: void
 */
int main(int argc, char *argv[])
{
	if (argc == 0 || argc > 0)
	{
	printf("%d\n", argc - 1);
	}
	else
	{
	printf("%s", *argv);
	}
	return (0);
}
