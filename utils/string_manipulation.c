#include "string_manipulation.h"
#include <stdio.h>

void reverse (char line[], int len) {
    int l = 0, r = len - 1;

    while (l < r) {
        // Swap characters
        char tmp = line[l];
        line[l] = line[r];
        line[r] = tmp;

        ++l;
        --r;
    }
}
