#include <stdio.h>
#include <math.h>
int main() {
    double num,squre_root; 
    printf("Enter a number: ");
    scanf("%lf", &num);
    squre_root = sqrt(num);
    printf("The square root of %.2f is %.2f\n", num, squre_root);
    return 0;
}