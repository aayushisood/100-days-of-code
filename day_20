#include <stdio.h>

int main() {
    // Q39: Product of odd digits of a number
    int n, digit, product = 1, hasOdd = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n;
    while (temp > 0) {
        digit = temp % 10;
        if (digit % 2 != 0) {
            product *= digit;
            hasOdd = 1;
        }
        temp /= 10;
    }

    if (hasOdd)
        printf("Product of odd digits of %d = %d\n", n, product);
    else
        printf("No odd digits in %d\n", n);

    // Q40: 1’s complement of a binary number
    int bin, bit, onesComplement = 0, place = 1;
    printf("\nEnter a binary number: ");
    scanf("%d", &bin);

    int tempBin = bin;
    while (tempBin > 0) {
        bit = tempBin % 10;
        if (bit == 0)
            bit = 1;
        else
            bit = 0;

        onesComplement += bit * place;
        place *= 10;
        tempBin /= 10;
    }

    printf("1’s complement of %d = %d\n", bin, onesComplement);

    return 0;
}
