#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	 
    int S, TV;
    int F;
    
    printf("insira 3 valores inteiros que indiquem respectivamente a hora da sa�da, o tempo de viagem e o\nfuso hor�rio do destino com rela��o � origem. O programa ir� exibir a hora local prevista no destino.\n");
    
    printf("\nInsira o primeiro valor: ");
    scanf("%d", &S);
    
    printf("\nInsira o segundo valor: ");
    scanf("%d", &TV);
    
    printf("\nInsira o terceiro valor: ");
    scanf("%d", &F);
    
    if ( S == 0){
        
        S = 24;
        
    }
    
    S = (( S + TV + F) % 24);
    
    printf("\nVOC� CHEGAR� �S: %d HORA(S)", S);
 
    return 0;
}
