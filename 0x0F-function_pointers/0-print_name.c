#include <stdlib.h>

/**
*print_name - Prints a name
*@name: name
*@f: ponter to function
*
*Return: no return
*/

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
