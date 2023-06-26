#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: char array string type
 */

void print_rev(char *s)
{
	int (papa);

	for (papa = 0; s[papa] != '\0'; papa++)
		;

	for (papa--; papa >= 0; papa--)
		_putchar(s[papa]);

	_putchar('\n');
}
