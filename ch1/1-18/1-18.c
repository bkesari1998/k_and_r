#include <stdio.h>
#include "../../utils/input_stream.h"

#define MAX_LEN 100


/* 
Removes trailing blanks and tabs from each line of input,
and deletes any blank lines. Rewrites each revised line
to stdout.
*/
int main (void) {
    int line_len;
    char line[MAX_LEN];

    // Loop until EOF is reached
    while ((line_len = my_getline (line, MAX_LEN)) > 0) {
        if (line[0] == '\n') {
            continue;
        }
        
        while (line_len > 0) {
            char last_char = line[line_len - 1];
            if ( last_char == ' ' || last_char == '\t' ) {
                --line_len;
                line[line_len] = '\0';
            }
            else {
                break;
            }
        }

        printf("\nRevised Line:\n%s", line);

    }

    return 0;
}

