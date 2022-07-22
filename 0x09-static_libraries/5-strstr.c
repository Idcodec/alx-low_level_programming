#include "main.h"

/**
* _strstr - function locate
* @haystack: location to search
* @needle: what is located
* Return: 0
*/

char *_strstr(char *haystack, char *needle)
{
	char *r = haystack, *f = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (r);
		}
		needle = f;
		r++;
		haystack = r;
	}
	return (0);
}
