#include <stdio.h>
#include <limits.h>

// Function to print the binary representation of an unsigned integer
void print_binary_unsigned(unsigned int x) {
    int started = 0; // To avoid printing leading zeros

    // Loop through each bit from MSB to LSB
    for (int i = sizeof(unsigned int)*CHAR_BIT - 1; i >= 0; --i) {
        unsigned int bit = (x >> i) & 1U; // Extract bit
        if (bit) started = 1;            // Mark when first '1' appears
        if (started) putchar('0' + bit); // Print bit only after first '1'
    }

    // If number is zero, print '0'
    if (!started) putchar('0');
}

int main(void) {
    unsigned int x;
    printf("Enter a number: ");
    if (scanf("%u", &x) != 1) return 0;

    printf("Binary: ");
    print_binary_unsigned(x); // Call function
    putchar('\n');
    return 0;
}

