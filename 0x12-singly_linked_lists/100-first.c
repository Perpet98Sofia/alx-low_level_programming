#include "lists.h"

/**
 * the fnction - prints text before main function executes
 *
 */

void __attribute__ ((constructor)) the function(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
