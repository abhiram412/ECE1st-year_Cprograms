#include<stdio.h>
#include<math.h>
int main()
{
    double iv, t, a;
    printf("Enter initial velocity:\n"); 
    scanf("%lf",&iv);
    printf("Enter time taken:\n");
    scanf("%lf",&t);
    printf("Enter accleration:\n");
    scanf("%lf",&a);
    double distance=(iv*t)+(0.5)*(a*pow(t,2));
    printf("distance travelled by object:%lf\n",distance);
    return 0;
}