#include <stdio.h>
#include <stdlib.h>
#include <main.h>
/**
 * string_concat - check the code
 * @s1 - p
 * @s2 - p
 * @n - num
 * Return: p
 */
 
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *nstr;
	unsigned int i, len, j;
	unsigned int size;

	len = 0;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len] != '\0')
		len++;
	size = (len + n) * sizeof(*nstr);
	nstr = malloc(size + 1);
	if (nstr == NULL)
		return (NULL);
	i = 0;
	while (i < len && s1[i] != '\0')
	{
		nstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < len+n && s2[j] != '\0')
	{
		nstr[i] = s2[j];
		i++;
		j++;
	}

	return (nstr);
}
