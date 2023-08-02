#include<stdio.h>
#include<math.h>

/* Define function here */
#define f(x) pow(x,4)+x+2

int main()
{
 float h,I,lower, upper, integration=0.0, stepSize=2, k;
 int i;
 
 /* Input */
 printf("Enter lower limit of integration: ");
 scanf("%f", &lower);
 printf("Enter upper limit of integration: ");
 scanf("%f", &upper);
    
 /* Finding Integration Value */
    integration=f(lower) + f(upper);
    h= (upper-lower)/2;
 for(i=2; i<=stepSize; i++)
 {
     k = lower + i*stepSize;
     integration = integration + (4 * f(k));
 }
 I= (h/3)*integration;
 printf("\nRequired value of integration is: %.3f", I);

 return 0;
}

