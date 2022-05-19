#include <stdio.h>
#include <stdlib.h>

int fatorial( int numero);

int main()
{
    int x, resposta;
    printf("Digite o numero para calcular o Fatorial: ");
    scanf("%d",&x);

    resposta =  fatorial(x);
    printf("Fatorial de %d e: %d \n",x,resposta);
    return 0;
}

int fatorial( int numero)
{
    int i ;
    int resultado = 1;
    int soma = 0 ;

    for(i = numero ; i > 1; i--)
    {
        resultado *= i ;

    }
    return resultado;


}
