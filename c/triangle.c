/* Sum of integers from one to sample. Input updated by the daily automation. */
#include <stdio.h>

int main(void) {
    int sample = 870; /* daily-input */
    printf("%d\n", sample * (sample + 1) / 2);
    return 0;
}
