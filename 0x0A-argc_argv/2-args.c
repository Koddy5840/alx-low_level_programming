#include <stdio.h>
#include "main.h"
/**
 *main - this is the main function
 *@argc: first argument of the function
 *@argv: second argument of the function
 *Return: void
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
	printf("%s\n", argv[a]);
	}
	return (0);
}
