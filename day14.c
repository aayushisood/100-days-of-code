#include <stdio.h>

int main() {
    // question 27
    int n, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    sum = n * n;  // sum of first n odd numbers = n*n

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    // question 28

    int a;
    int product = 1;

    printf("Enter a number: ");
    scanf("%d", &a);

    for(int i = 2; i <= a; i += 2) {
        product = product * i;
    }

    printf("Product of even numbers from 1 to %d = %d\n", a, product);

    return 0;
}





  

