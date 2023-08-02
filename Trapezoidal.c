#include<stdio.h>
#include<math.h>
/* Define function here */
#define f(x) pow(x,4)+x+2

int main()
{
 float lower, upper, integration=0.0,h;
 printf("Enter lower limit of integration: ");
 scanf("%f", &lower);
 printf("Enter upper limit of integration: ");
 scanf("%f", &upper);
 h=(upper-lower)/2;
 integration = h*(f(lower) + f(upper));
 printf("\nRequired value of integration is: %.3f", integration);
 return 0;
}
