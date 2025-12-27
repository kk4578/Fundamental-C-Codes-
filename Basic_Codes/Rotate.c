#include <stdio.h>
#include <limits.h>

// Rotate left by one bit
unsigned int rotate_left_once(unsigned int v) {
    unsigned int w = sizeof(unsigned int)*CHAR_BIT;
    unsigned int msb = v >> (w - 1); // Extract MSB
    return (v << 1) | msb;           // Shift left and add MSB to LSB
}

// Rotate right by one bit
unsigned int rotate_right_once(unsigned int v) {
    unsigned int w = sizeof(unsigned int)*CHAR_BIT;
    unsigned int lsb = v & 1U;        // Extract LSB
    return (v >> 1) | (lsb << (w - 1)); // Shift right and add LSB to MSB
}

// Rotate n times (positive: left, negative: right)
unsigned int rotate_n(unsigned int v, int n) {
    if (n >= 0) while (n--) v = rotate_left_once(v);
    else        while (n++) v = rotate_right_once(v);
    return v;
}

int main(void) {
    unsigned int value;
    int n;

    printf("Enter value and number of rotations: ");
    if (scanf("%u %d", &value, &n) != 2) return 0;

    printf("Result: %u\n", rotate_n(value, n));
    return 0;
}

