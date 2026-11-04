/* Parity: zero is even, one is odd. Input updated by the daily automation. */
#include <stdio.h>

int main(void) {
    int sample = 669; /* daily-input */
    printf("%d\n", sample % 2);
    return 0;
}
