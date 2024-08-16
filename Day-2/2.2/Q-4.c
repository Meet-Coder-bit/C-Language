#include <stdio.h>
int main()
{
    float p;
    printf("Enter principal :");
    scanf("%f", &p);

    float r;
    printf("Enter rate :");
    scanf("%f", &r);

    float n;
    printf("Enter time :");
    scanf("%f", &n);

    float a = p * r * n / 100;
    printf("The area of a triangle :%f", a);
}