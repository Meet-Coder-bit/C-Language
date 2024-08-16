#include <stdio.h>

int main()
{
    const float pi = 3.14;
    float r;
    printf("Enter the radius : ");
    scanf("%f", &r);
    float a = pi * r * r;
    printf("The area is: %f", a);
}