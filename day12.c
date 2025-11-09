// Online C compiler to run C program online
#include <stdio.h>
int main() {

    // question 23

int days,fine;
printf("enter days");
scanf("%d",&days);
if(days<=5){
    fine=days*2;
    printf("%d",fine);
  
}else if(days<=10){
    fine=5*2;
    days=days-5;
    fine+=days*4;
    printf("%d",fine);
  
}
else if(days<=30){
    fine=5*2;
    fine+=5*4;
    days=days-10;
    fine+=days*6;
    printf("%d",fine);
    
}else{
    printf("Membership cancelled");
}
      // question24

    int units;
    float bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 100) {
        bill = units * 5;
        printf("Bill = ₹%f\n", bill);
    }

    if (units <= 200) {
          bill=100*5;
         units=units-100;
         bill+=units*7;
        
        printf("Bill = %f\n", bill);
    }
    if (units <= 300) {
       bill=100*5;
       bill+=100*7;
       units=units-200;
       bill+=units*10;
    
        printf("Bill = %f\n", bill);
    }  
    if (units > 300) {
       bill=100*5;
       bill+=100*7;
       bill+=units*10;
       units=units-300;
       bill+=units*12;

        printf("Bill = %f\n", bill);
    }

    return 0;
}
