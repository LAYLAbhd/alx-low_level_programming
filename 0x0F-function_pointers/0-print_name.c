#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - a name to print 
 * @name: name to print
 * @f: pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name && !f)
		return;
	f(name);
}
