#include "main.h"
/**
 *positive_or_negative - this is the main fuction
 *@i:  parameter of the fuction
 *Return - void (success)
 */

void positive_or_negative(int i)
{
	if (i > 0)
	printf("%d if positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);

	else
		printf("%d is zero\n", i);
}
