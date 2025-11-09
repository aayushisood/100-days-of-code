#include <stdio.h>

int main() {
 // question 3
    float length, breadth, area, perimeter;

    // Input length and breadth
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Calculate area and perimeter
    area = length*breadth;
    perimeter = 2*(length + breadth);

    // Output results
    printf("Area of the rectangle = %f ",area);
    printf("Perimeter of the rectangle = %f " ,perimeter);

     // question 4

    float radius,areaa, circumference;

    // Input radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and circumference
    areaa = 3.14*radius * radius;
    circumference = 2 *3.14* radius;

    // Output results
    printf("Area of the circle = %f\n", areaa);
    printf("Circumference of the circle = %f\n", circumference);


}
