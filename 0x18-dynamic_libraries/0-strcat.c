#include "main.h"

/**
 * _strcat - appends strings
 * @dest: destination to append
 * @src: what to append
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int papa, j;

	for (papa = 0; dest[papa] != '\0'; papa++)
	{
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[papa] = src[j];
		j++;
		papa++;
	}
	papa++;
	dest[papa] = '\0';
	return (dest);
}
