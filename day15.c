#include <stdio.h>

int main() {
    // question 29
    int n;
    int fact = 1;  

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("Factorial of %d = %d\n", n, fact);

    return 0;
    
}
