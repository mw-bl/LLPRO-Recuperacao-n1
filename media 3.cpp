#include <stdio.h>
 
int main() {
	float A, B, C, D, M, EX, MF;

	printf("Insira suas quatro notas, para o programa realizar o calculo da media.\nSe a media calculada for um valor entre 5.0 e 6.9, inclusive estas, insira um valor correspondente a nota do exame\n");

	printf("\nInsira o primeiro valor: ");
 	scanf("%f", &A);
 	
 	printf("Insira o segundo valor: ");
 	scanf("%f", &B);
 	
 	printf("Insira o terceiro valor: ");
 	scanf("%f", &C);
 	
 	printf("Insira o quarto valor: ");
 	scanf("%f", &D);
 
 	M = ((A*2) + (B*3) + (C*4) + (D*1))/10;
 
 	printf("Media: %.1f\n",M);
 
	 if (M >= 7){
    	 printf("Aluno aprovado.\n");
 	} if (M < 5){
    	 printf("Aluno reprovado.\n");
	 }
 
 	if ((5 <= M) && (M < 6.9)){
     	printf("Aluno em exame.\n");
    	 scanf("%f", &EX);
     	printf("Nota do exame: %.1f\n",EX);
    	 MF = (M + EX)/2;
     
     	if (MF >= 5){
         	printf("Aluno aprovado.\n");
         	printf("Media final: %.1f\n", MF);
     	} else {
         	printf("Aluno reprovado.\n");
         	printf("Media final: %.1f\n",MF);
     	}
 	}
 
    return 0;
}
