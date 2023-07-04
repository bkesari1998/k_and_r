#include <stdio.h>
#include "../../utils/string_manipulation.h"
#include "../../utils/input_stream.h"

#define MAX_LEN 100

/*
Reverses input strings. Prints each reversed string to console.
*/
int main (void) {
    int line_len;
    char line[MAX_LEN];

    // Loop until EOF is reached
    while ((line_len = my_getline (line, MAX_LEN)) > 0) {
        
        // Don't include newline in reversal
        if (line[line_len - 1] == '\n') {
            --line_len;
        }

        reverse (line, line_len);

        printf("\nReversed String:\n%s\n", line);
    }

    return 0;
}
