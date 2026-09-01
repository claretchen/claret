#include<stdio.h>
#include<math.h>
int main(){
   double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double n=(a+b+c)/2.0;
    double x=sqrt(n*(n-a)*(n-b)*(n-c));
    printf("%.0f",x);
    return 0;
}