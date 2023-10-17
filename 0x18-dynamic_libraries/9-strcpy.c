#include "main.h"

/**
 **_strcpy - See description
 *@dest: char type string
 *@src: char type string
 *Description: Copy the string pointed to by pointer `src` to
 *the buffer pointed to by `dest`
 *Return: Pointer to `dest`
 */

char *_strcpy(char *dest, char *src)
{
	int t;

	for (t = 0; src[t] != '\0'; t++)
	{
		dest[t] = src[t];
	}
	dest[t] = '\0';

	return (dest);
}
