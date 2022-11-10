/*Desenvolver uma função que exiba os múltiplos
de N compreendidos no intervalo definido por
A e B.
*/

#include <stdio.h>
void CalculoMultiplos (int a, int b, int n)
{
  int i;

      i=a;
      while (i<=b)
      {
        if (i%n==0)
        {
          printf("%d ", i);
        }
      i++;
      }
}
void main ()
{
  int A, B, N;

    printf("Digite os valores que definirão o inicio e o fim do intervalo, respectivamente: ");
    scanf("%d %d", &A, &B);
    printf("Digite o numero cujos multiplos deseja ver: ");
    scanf("%d", &N);

  CalculoMultiplos(A, B, N);

}
