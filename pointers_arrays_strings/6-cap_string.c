#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
 * cap_string - changes all lowercase letters of a string to uppercase.
 * @a: string.
 * Return: all upper.
 */
char *cap_string(char *a) {
    int i;
    int len = strlen(a);

    for (i = 0; i < len; i++) {
        if (i == 0 || isspace(a[i - 1]) || ispunct(a[i - 1])) {
            a[i] = toupper(a[i]);
        }
    }

    return a;
}

