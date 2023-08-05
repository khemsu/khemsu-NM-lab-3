#include<stdio.h>
#include<math.h>


double f(double x,double y){
    return ((x*x*x)+(y*y*y));
}

int main(){
    double a,b,c,d,I,x,y;
    printf("Enter a : ");
    scanf("%lf",&a);
    printf("Enter b : \n");
    scanf("%lf",&b);
    printf("Enter c : \n");
    scanf("%lf",&c);
    printf("Enter d : \n");
    scanf("%lf",&d);
    x=(b-a)/2;
    y=(d-c)/2;
    I=(x*y*(f(a,c)+f(a,d)+f(b,c)+f(b,d)));
    printf("required integration value is: %lf",I);
    return 0;
}

