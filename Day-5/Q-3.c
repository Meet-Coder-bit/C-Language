#include <stdio.h>

int main()
{
    float maths,english,science,avgg;

    printf("Enter maths marks:");
    scanf("%f",&maths);

    printf("Enter english marks:");
    scanf("%f",&english);

    printf("Enter science marks:");
    scanf("%f",&science);

    if (maths < 0 && maths > 100)
    {
        printf("invlaid mark");
    }

    avgg = (maths + english + science) / 3;

    printf("the average of three subject is:%f",avgg);
}

