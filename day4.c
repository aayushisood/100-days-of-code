#include <stdio.h>

int main() {
    // question 8
    int n,sum;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    sum = n*(n+ 1)/2;

    printf("Sum of first %d natural numbers = %d\n", n, sum);

   // question 7

    int a, b;
    // Input two numbers
    printf("Enter first number (a): ");
    scanf("%d", &a);
    printf("Enter second number (b): ");
    scanf("%d", &b);

    //  before swapping
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swap without using third var
    a = a + b;  
    b = a - b;  
    a = a - b;  

    // Display after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

}
