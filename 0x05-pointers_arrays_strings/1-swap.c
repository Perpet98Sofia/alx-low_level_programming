#include "main.h"

/**
 *swap_int - swaps the values of two integers
 *@a: int int pointer type
 *@b: int pointer type
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
