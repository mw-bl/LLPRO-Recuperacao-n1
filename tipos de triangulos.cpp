#include <stdio.h>
 
 int main() {
 	
	double a, b, c, A, B, C;
	
	printf("Insira 3 valores de ponto flutuante. O programa ira ordena-los em ordem decrescente,\ne em seguida ira exibir que tipo de triangulo sera formado com os valores inseridos.\n");
	
	printf("\nInsira o primeiro valor: ");
	scanf("%lf", &a);
	
	printf("\nInsira o segundo valor: ");
	scanf("%lf", &b);
	
	printf("\nInsira o terceiro valor: ");
	scanf("%lf", &c);

	if(a >= b && a >= c) {
		A = a;
		B = b;
		C = c;	
	}
	if(b >= a && b >= c) {
		A = b;
		B = a;
		C = c;	
	}
	if(c >= b && c >= a) {
		A = c;
		B = b;
		C = a;	
	}
	
    
	if (A >= B + C) {
    	printf("\nNAO FORMA TRIANGULO");
	}
	else {
		if ((A * A) == (B * B) + (C * C)) {
    		printf("\nTRIANGULO RETANGULO");
		}
		
	if ((A * A) > (B * B) + (C * C)) {
    	printf("\nTRIANGULO OBTUSANGULO");
	}	
	else {
    	printf("\nTRIANGULO ACUTANGULO");
		}
				
	if ((A == B) && (B == C) && (C == A)) {
    	printf("\nTRIANGULO EQUILATERO");
		}
					
	if ((A == B && A != C)||(B == C && B != A) || (C == A && C != B)) {
    	printf("\nTRIANGULO ISOSCELES");
		}	
	}
    return 0;
}
