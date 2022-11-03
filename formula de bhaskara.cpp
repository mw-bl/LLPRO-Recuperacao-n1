#include <stdio.h>
#include <math.h>
 
int main() {
 	
    double A, B, C, R1, R2;
    
    printf("Leia 3 valores reais, para que o programa faca calculo das raizes da equacao de Bhaskara.\n");
    /*Se não for possível calcular as raízes, o programa irá exibir a mensagem correspondente “Impossivel calcular”,
	caso haja uma divisão por 0 ou raiz de numero negativo.*/
    
    printf("\nInsira o primeiro valor: ");
    scanf("%lf", &A);
    
    printf("Insira o segundo valor: ");
    scanf("%lf", &B);
    
    printf("Insira o terceiro valor: ");
    scanf("%lf", &C);
    
    if ((B*B - 4*A*C)<0 || A==0) {
        printf("Impossivel calcular\n");
    } else {
        	R1 = (-B + sqrt(B*B - 4*A*C))/(2*A);
        	R2 = (-B - sqrt(B*B - 4*A*C))/(2*A);
        	
        	printf("\nR1 = %.5lf\n", R1);
        	printf("R2 = %.5lf\n", R2);
    	}
    
	return 0;
}
