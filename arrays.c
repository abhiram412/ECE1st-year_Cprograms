#include <stdio.h>
int main()
{
    int marks [5];
    int sum;
    float avg;
    printf("Enter the marks of 5 subjects: \n");
    printf("mathematics:");
    scanf("%d", &marks[0]);
    printf("science:");
    scanf("%d", &marks[1]);
    printf("english:");
    scanf("%d", &marks[2]);
    printf("social science:");
    scanf("%d", &marks[3]);
    printf("hindi:");
    scanf("%d", &marks[4]);
    sum = marks[0] + marks[1] + marks[2] + marks[3] + marks[4];
    avg = sum / 5.0;
    printf("The total marks obtained is: %d\n", sum);
    printf("The average marks is: %.2f\n", avg);
    return 0;
}