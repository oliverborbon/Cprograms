#include<stdio.h>
 
int main() 
{
 
   float celsius, fahrenheit;
 
   printf("Dame la temperatura en grados Celsius: \n");
   scanf("%f", &celsius);
 
   fahrenheit = (celsius * 1.8) + 32;

   printf("La temperatura en Fahrenheit es: %.3f \n", fahrenheit);
 
 return (0);
}
