#include "main.h"

/**
* set_string - a function that sets the value of a pointer to char
* @s: Reference pointer
* @to: char
*/

void set_string(char **s, char *to)
{
	*s = to;
}
