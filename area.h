#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,area;
    printf("enter the length of side:");
    scanf("%lf%lf%lf",&a,&b,&c);
    double s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of triangle is:%.2lf",area);
    return 0;
}