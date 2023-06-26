#include "main.h"

/**
 *rev_string - reverse a string
 * @s: char array string type
 */

void rev_string(char *s)
{
int t, d, l;
char m;

for (t = 0; s[t] != '\0'; t++)
		;
l = t;
for (t--, d = 0; d < l / 2; t--, d++)
{
m = s[d];
s[d] = s[t];
s[t] = m;
}
}
