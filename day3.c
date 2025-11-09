#include <stdio.h>

int main() { 
    // question 5
    float celsius,fahrenheit;

    // Input 
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Output 
    printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);

 



    // question 6
    int a, b, temp;
    // Input
    printf("Enter first number (a): ");
    scanf("%d", &a);
    printf("Enter second number (b): ");
    scanf("%d", &b);

    // before swapping
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Swap using third variable
    temp = a;
    a = b;
    b = temp;

    // Display after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

}









