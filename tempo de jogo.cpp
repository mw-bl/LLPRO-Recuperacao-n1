#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	 
    int I,F,Result;
    
    printf("Insira a hora inicial e a hora final de um jogo. O programa irá calcular a duração do jogo,sabendo que o\nmesmo pode começarem um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24 horas\n");
    
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
