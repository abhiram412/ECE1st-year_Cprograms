//simple intrest//
#include <stdio.h>
int main()
{
    double principle, time, rate_of_interest, simple_interest;
    printf("Enter principle amount, time in years and rate of interest: ");
    scanf("%lf, %lf, %lf", &principle, &time, &rate_of_interest);
    simple_interest = (principle * time * rate_of_interest) / 100;
    printf("simple interest = %lf", simple_interest);
    return 0;
}
   