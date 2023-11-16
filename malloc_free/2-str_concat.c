#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
 {
	 int l1, l2, l3, i;
	 char *a;
	 if (s1 == NULL || s2 == NULL)
		 return (NULL);
	 l1 = strlen(s1);
	 l2 = strlen(s2);
	 l3 = l1 + l2 + 1;
	 a = malloc(sizeof(char)* l3);
	 for(i = 0; i < l1; i++)
		 a[i] = s1[i];
	 for(i = 0; i < l2; i++)
		 a[i+l1] = s2[i];
	 a[l1 + l2]='\0';
	 return a;
 }
