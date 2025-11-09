
    #include <stdio.h>
#include <math.h>
int main() {

       // question 17
 double a,b,c;
 printf("enter value of a");
 scanf("%lf",&a);
  printf("enter value of b");
 scanf("%lf",&b);
  printf("enter value of c");
 scanf("%lf",&c);
 
//  d=b2-4ac;
double d=(b*b)-(4*a*c);

double r1=(-b+sqrt(d))/(2*a);
    double r2=(-b-sqrt(d))/(2*a);
if(d>0){
    
    printf("the root is real and different%lf,%lf",r1,r2);
}else if(d==0){
  printf("the root is real and equal%lf",r1);
}else{
     printf("the root is complex\n");
}
  



    //  question 18 
    int percentage;

    // Input 
    printf("Enter the percentage (0-100): ");
    scanf("%d", &percentage);

   // checking
    if (percentage >= 90 && percentage <= 100) {
        printf("The grade is: A\n");
    }
    if (percentage >= 80 && percentage <= 89) {
        printf("The grade is: B\n");
    }
    if (percentage >= 70 && percentage <= 79) {
        printf("The grade is: C\n");
    }
    if (percentage >= 60 && percentage <= 69) {
        printf("The grade is: D\n");
    }
    if (percentage >= 0 && percentage < 60) {
        printf("The grade is: F\n");
    }
    return 0;
}

