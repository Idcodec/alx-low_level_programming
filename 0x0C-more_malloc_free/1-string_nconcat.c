#include "main.h"

/**
* string_nconcat - a function that concatenates two strings
* @s1: first string
* @s2: secong string
* @n: number of bytes from s2 to concatenate to s1
* Return: pointer to the resulting string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, len1, len2;

	len1 = 0;
	len2 = 0;

	if (s1 != NULL)
		for (i = 0; s1[i] != '\0'; i++)
			len1++;

	if (s2 != NULL)
		for (i = 0; s2[i] != '\0'; i++)
			if (i < n)
				len2++;

	s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];

	for (j = 0; j < len2; i++, j++)
		s[i] = s2[j];
		str[i] = '\0';

		return (s);
}
