#include <stdio.h>
int main()
{
   double tempc;
   printf("Enter temperature in Celsius: ");
    scanf("%lf", &tempc);
    printf("Fahrenheit: %.lf\n", (tempc * 9 / 5) + 32);
    return 0;
}