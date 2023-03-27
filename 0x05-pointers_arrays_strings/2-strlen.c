#include "main.h"
/**
  *_strlen - this is the main function
  *@s: parameter of the function
  *Return: length of a string
  */
int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	return (lenght);
}
