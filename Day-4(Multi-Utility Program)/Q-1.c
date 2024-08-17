#include<stdio.h>
int main()
{
   float celsius,fahrenheit;

   printf("Enter the Temparature in celsius :\n");
   scanf("%f",&celsius);

   fahrenheit = (1.8 * celsius) + 32;

   printf("Temparature in fahrenheit :%f \n",fahrenheit);
}