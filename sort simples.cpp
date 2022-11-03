#include <stdio.h>
#include <locale.h>

int main() {
 	setlocale(LC_ALL, "Portuguese_Brazil");
 
    int A,B,C;
    
    printf("Insira 3 válores inteiros. O programa ira exibi-los em ordem crescente,\ne no final os válores serão exibidos em ordem crescente, uma linha em \nbranco e em seguida, os valores na sequência como foram lidos.\n");
    
    printf("\nInsira o primeiro valor: ");
    scanf("%d", &A);
    
    printf("Insira o segundo valor: ");
    scanf("%d", &B);
    
    printf("Insira o terceiro valor: ");
	scanf("%d", &C);
    
    if(A < B && B < C){
        printf("%d\n" "%d\n" "%d\n", A,B,C);
    } else if (A < C && C < B){
        printf("%d\n" "%d\n" "%d\n", A,C,B); 
    } else if (B < A && A < C){
        printf("%d\n" "%d\n" "%d\n", B,A,C);
    } else if (B < C && C < A){
    	printf("%d\n" "%d\n" "%d\n", B,C,A);
	} else if (C < A && A < B){
		printf("%d\n" "%d\n" "%d\n", C,A,B);
	} else if (C < B && B < A){
		
		printf("\n%d\n",C);
		printf("%d\n",B);
		printf("%d\n",A);
	}
						
		printf("\n");
						
		printf("%d\n",A);
		printf("%d\n",B);
		printf("%d\n",C);
		
    return 0;
}
