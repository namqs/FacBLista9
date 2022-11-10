/*Implementar uma função que converta
determinada temperatura em graus Celsius
para graus Fahrenheit.*/

#include <stdio.h>
float Conversao ( float Celsius)
 {
  float Fahrenheit=0;

    Fahrenheit = (Celsius/5 ) * 9 + 32;

    return Fahrenheit;
 }

void main ()
{
  float celc, fah;

    printf("digite a temperatura em celsius: ");
    scanf("%f", &celc);

    fah = Conversao (celc);
    printf("Seu valor em Fahrenheit eh: %.fºF", fah);
}
