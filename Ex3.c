/*
Desenvolver uma função que calcule o n-ésimo
termo da sequência de Fibonacci.
*/

#include <stdio.h>

int Calculo (int n)
{
  int i, a, b, c;

    if (n <= 2)
	{
		return 1;
	}
	else
	{
		//inicializando 'a' e 'b' com os dois primeiros termos da sequência
		a = 1;
		b = 1;

		//calculando do 3º ao n-ésimo termo
		for (i=3;i<=n;i++)
		{
			c = a+b;

			//atualizando os valores de 'a' e 'b' para que seja possível
			//calcular o próximo termo (na próxima iteração)
			a = b;
			b = c;
		}

		return c;
  }
}

void main ()
{
  int N, termo;

    printf("Digite um valor: ");
    scanf("%d", &N);

    termo = Calculo (N);

    printf("Resultado = %d", termo);
}
