#include<stdio.h>
#include<math.h>

/* Define function here */
#define f(x) pow(x,4)+x+2

int main()
{
 float lower, upper, integration=0.0, h,i;
 
 /* Input */
 printf("Enter lower limit of integration: ");
 scanf("%f", &lower);
 printf("Enter upper limit of integration: ");
 scanf("%f", &upper);
 h = (upper - lower)/3;

 /* Finding Integration Value */
 integration = f(lower) + f(upper);
 i= f(lower+h)+f(lower+2*h);
 integration=(i*3)+integration;
 integration = (integration*3/8)*h;
 printf("\nRequired value of integration is: %.3f", integration);

 return 0;
}


