#include<stdio.h>
#include<math.h>

/* Define function here */
#define f(x) pow(x,4)+x+2

int main()
{
 float h,i,j,I,lower, upper, integration=0.0 ;

 /* Input */
 printf("Enter lower limit of integration: ");
 scanf("%f", &lower);
 printf("Enter upper limit of integration: ");
 scanf("%f", &upper);
    
 /* Finding Integration Value */
    integration= f(lower) + f(upper);
    h= (upper-lower)/2;
//    printf("f(x0) and f(x2) =%.3f  ,  %.3f", f(lower), f(upper));
 {
     i=4*f(lower+h);
     j=i+integration;
 }
 I= (h*j)/3;
 printf("\nRequired value of integration is: %.3f", I);

 return 0;
}



