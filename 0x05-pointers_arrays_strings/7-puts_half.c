#include "main.h"

/**
 * puts_half - print second half of a string
 * @str: char array string type
 * Description: If odd number of chars, print (length - 1) / 2
 */

void puts_half(char *str)
{
	int t;

	for (t = 0; str[t] != '\0'; t++)
	
		t++;
	for (t /= 2; str[t] != '\0'; t++)
	{
		_putchar(str[t]);
	}
	_putchar('\n');
}
