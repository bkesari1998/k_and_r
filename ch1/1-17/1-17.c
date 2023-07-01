#include <stdio.h>
#define MAX_LINE 1000
#define MIN_TO_PRINT 80

int my_getline (char line[], int maxline);
void copy (char to[], char from[]);

int main(void) {
    int line_len;
    char line[MAX_LINE];

    while ((line_len = my_getline (line, MAX_LINE)) > 0) {
        if (line_len >= MIN_TO_PRINT) {
            printf("\nPrinting line with length %d:\n%s\n",line_len, line);
        }
    }
}

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

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy (char to[], char from[]) {
    int i = 0;

    while ((to[i] = from[i]) != '\0')
        ++i;
}
