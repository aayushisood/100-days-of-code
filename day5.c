#include <stdio.h> 

int main() {
    // question 9
    float principal, rate, time, simpleInterest;

    // Input 
    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Calculate Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    
    // Display results
    printf("\nSimple Interest = %f\n", simpleInterest);
 
      // question 10
 
    int totalSeconds, hours, minutes, seconds;

    // Input time in seconds
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    // Conversion
    hours = totalSeconds / 3600;         // 1 hour = 3600 seconds
    minutes = (totalSeconds % 3600) / 60; // Remaining minutes
    seconds = totalSeconds % 60;         // Remaining seconds

    // Output
    printf("Time = %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
