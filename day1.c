#include<stdio.h>
int main(){
    // user input sum of numbers 
    // question 1
int a,b;
printf("enter first num \n");
scanf("%d",&a);
printf("enter second num \n");
scanf("%d",&b);
int sum;
sum=a+b;
printf("%d",sum);

// user input-> sum,diff,mul,div
// question 2
int c,d,add,diff,mul,div;
printf("\nenter first num\n");
scanf("%d",&c);
printf("enter second num\n");
scanf("%d",&d);
add=c+d;
diff=c-d;
mul=c*d;
div=c/d;
printf("sum is -> %d , diff is -> %d , mul is -> %d and div is -> %d ",add,diff,mul,div);



}


