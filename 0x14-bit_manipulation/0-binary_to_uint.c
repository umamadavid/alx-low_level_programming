#include <stdio.h>
#include <stdlib.h>
#include <main.h>

unsigned int binary_to_unsigned_int(char *binary) {
    unsigned int result = 0;
    int len = strlen(binary);

    for (int i = 0; i < len; i++) {
        if (binary[i] == '1') {
            result |= 1 << (len - 1 - i);
        }
    }

    return result;
}
