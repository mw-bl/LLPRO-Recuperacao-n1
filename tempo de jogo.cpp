#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	 
    int I,F,Result;
    
    printf("Insira a hora inicial e a hora final de um jogo. O programa ir� calcular a dura��o do jogo,sabendo que o\nmesmo pode come�arem um dia e terminar em outro, tendo uma dura��o m�nima de 1 hora e m�xima de 24 horas\n");
    
    printf("\nInsira a hora inicial do jogo: ");
    scanf("%d", &I);
    
    printf("\nInsira a hora final do jogo: ");
    scanf("%d", &F);
    
    if((I > F) || (I == F)){
        
        Result = ( 24 - I + F);  
        printf("\nO JOGO DUROU %d HORA(S)\n", Result);
        
    } else {
            
        Result = ( F - I);
        printf("\nO JOGO DUROU %d HORA(S)\n", Result);
        
        }
    return 0;
}
