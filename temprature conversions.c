#include <stdio.h>
int main() 
{
	double tempf;
	printf("Enter temperature in Fahrenheit: ");
	scanf("%lf", &tempf);
	double tempc = (tempf - 32) * 5/9;
	printf("Temperature in Celsius: %.1lf\n", tempc);
    printf("temperature in celcius is %.1lf\n", tempc);
    scanf("%lf", &tempc);
    tempf = (tempc * 9/5) + 32;
    printf("temperature in fahrenheit is %.1lf\n", tempf);
	return 0;
}
