#include <stdio.h>

/*
Replaces blanks in the input with the
minimum number of tabs and blanks to achieve the same spacing.
*/

#define TAB_STOP 3

int main (void) {

    int c;
    int blank_counter = 0;
    
    // Loop until EOF is reached 
    while ((c = getchar ()) > 0) {
        if (c == ' ') {
            ++blank_counter; 
            if (blank_counter == TAB_STOP) {
                putchar ('\t');
                blank_counter = 0;
            }
        } else {
            for (int i = 0; i < blank_counter; ++i) {
                putchar (' ');
            }
            putchar (c);
            blank_counter = 0;
        }
    }
    
    return 0;
}
