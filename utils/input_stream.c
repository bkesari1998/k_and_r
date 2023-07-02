#include "input_stream.h"
#include <stdio.h>

/* getline: read a line into s, return length */
int my_getline (char s[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c !='\n'; ++i) {
        s[i] = c;
    }

    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';

    return i;
}

/* copy: copy 'from' into 'to'; assume 'to' is large enough */
void copy (char to[], char from[]) {
    int i = 0;

    while ((to[i] = from[i]) != '\0')
        ++i;
    
}
