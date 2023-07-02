#include "string_manipulation.h"

void reverse (char line[], int len) {
    int l = 0, r = len;

    while (l < r) {
        // Swap characters
        char tmp = line[l];
        line[l] = line[r];
        line[r] = tmp

        ++l;
        --r;
    }
}
