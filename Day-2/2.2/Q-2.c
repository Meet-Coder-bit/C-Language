#include <stdio.h>

int main()
{
    float h;
    printf("height : ");
    scanf("%f", &h);

    float w;
    printf("width : ");
    scanf("%f", &w);

    float l = h * w;
    printf("length : %f", l);
}