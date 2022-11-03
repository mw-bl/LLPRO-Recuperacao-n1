#include <stdio.h>
#include <locale.h>
 
int main() {
 setlocale(LC_ALL, "Portuguese_Brazil");
    int A,B,C,D;
    
    printf("Insira 4 valores inteiros A, B, C e D. \n");
    
    /* Se B for maior do que C e se D for maior do que A, e a soma de C com D for maior que a soma de A e B e se C e D, ambos,
	forem positivos e se a variável A for par será exibida a mensagem "Valores aceitos", senão será exibida "Valores nao aceitos".*/
 
	printf("\nInsira o primeiro valor: ");
    scanf("%d", &A);
    
    printf("Insira o segundo valor: ");
    scanf("%d", &B);
    
    printf("Insira o terceiro valor: ");
    scanf("%d", &C);
    
    printf("Insira o quarto valor: ");
    scanf("%d", &D);
    
    if(B>C && D>A && C > 0 && D > 0 && (C+D)>(A+B) && A%2 == 0 ){
        printf("\nValores aceitos\n");
    }else{
        printf("\nValores nao aceitos\n");
    	}
    	
    return 0;
}
