#include <stdio.h>
#include <stdlib.h>

int fatorial( int numero);

int main()
{
    int x, resposta;

    do
    {
        printf("Digite o numero para calcular o Fatorial: ");
        scanf("%d",&x);
        printf("\n");
        if( x < 0)
        {
            printf("Nao a fatorial de numero negativos ! \n");
            printf("\n");
        }else{
             resposta =  fatorial(x);
             printf("Fatorial de %d e: %d \n",x,resposta);
        }

    }while(x < 0);


    return 0;
}

int fatorial( int numero)
{
    int i ;
    int resultado = 1;
    int soma = 0 ;

    if( numero == 0 )
    {
        return 1 ;
    }
    else
    {
        for(i = numero ; i > 1; i--)
        {
            resultado *= i ;

        }
        return resultado;

    }

}
