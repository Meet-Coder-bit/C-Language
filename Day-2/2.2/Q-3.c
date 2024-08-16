#include <stdio.h>
int main()
{
    float b;
    printf("Enter base :");
    scanf("%f", &b);

    float h;
    printf("Enter height :");
    scanf("%f", &h);

    float a = 0.5 * b * h;
    printf("The area of a triangle :%f", a);
}