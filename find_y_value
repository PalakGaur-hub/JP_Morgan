#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Problem:
Given a binary string x of length n and an integer maxSet,
construct another binary string y of length n such that:

1. The number of '1's in y is at most maxSet.
2. The value of x XOR y is maximized.

Approach:
To maximize XOR:
- XOR gives 1 when bits are different.
- So for each position:
    If x[i] == '0' → set y[i] = '1' (if allowed)
    If x[i] == '1' → set y[i] = '0'

We prioritize from left to right (higher significance bits).

Time Complexity: O(n)
*/

char* findYValue(int bits, int maxSet, char* x) {
    
    char* y = (char*) malloc((bits + 1) * sizeof(char));
    
    int used = 0;

    for (int i = 0; i < bits; i++) {
        if (x[i] == '0' && used < maxSet) {
            y[i] = '1';
            used++;
        } else {
            y[i] = '0';
        }
    }

    y[bits] = '\0';
    return y;
}

/* Example Usage */
int main() {
    int bits = 3;
    int maxSet = 1;
    char x[] = "101";

    char* result = findYValue(bits, maxSet, x);

    printf("Output y: %s\n", result);

    free(result);
    return 0;
}
