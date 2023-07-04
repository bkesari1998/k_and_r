#include <stdio.h>

/*
Replaces tabs in the input with the proper number of blanks 
to space to the next tabstop
*/

#define TAB_STOP 3

int main (void) {

    int c;
    
    // Loop until EOF is reached 
    while ((c = getchar ()) > 0) {
        if (c == '\t') {
            for (int i = 0; i < TAB_STOP; ++i) {
                putchar(' ');
            }
        } else {
            putchar(c);
        }
    }
    
    return 0;
}
