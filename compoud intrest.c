#include <stdio.h>
#include <math.h>
int main()
{
    double p,t,r,n;
    printf("Enter priinciple value,time,rate of intrest,number of times intrest is compouded:\n");
    scanf("%lf%lf%lf%lf",&p,&t,&r,&n);
    double a = p*pow((1+(r/(n*100))),n*t);
    printf("Amount is : %lf",a);
    double ci = a-p;
    printf("Compound intrest is :\n %lf",ci);
    return 0;
}