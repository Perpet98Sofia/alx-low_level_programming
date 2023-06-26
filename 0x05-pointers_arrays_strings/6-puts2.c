#include "main.h"

/**
 * puts2 - print one char out of 2 of a string
 * @str: char array string type
 * Description: Print 1st char, then 3rd, then 5th, etc..
 */

void puts2(char *str)
{
	int t;

	for (t = 0; str[t] != '\0'; t++)
	{
		if (t % 2 == 0)
			_putchar(str[t]);
	}
	_putchar('\n');
}
