#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
    int P, J1, J2, R, A, VENCE, SOMA;
    
    printf("Insira 5 valores inteiros. O programa irá dada a escolha do jogador 1 entre par ou ímpar,\nos números escolhidos como jogada e as ações dos jogadores (roubo/acusação) mostrar quem foi o vencedor.\n");
    
    printf("\n1 = J1 ESCOLHEU PAR E 0 = J1 ESCOLHEU ÍMPAR.\n");
    printf("Escolha do jogador(par/impar): ");
    scanf("%d", &P);
    
    printf("\nInsira o número escolhido pelo jogador 1 como jogada: ");
    scanf("%d", &J1);
    
    printf("\nInsira o número escolhido pelo jogador 2 como jogada: ");
    scanf("%d", &J2);
    
    printf("\n1 = J1 ROUBOU e 0 = J1 NÃO ROUBOU.\n");
    printf("Ação do jogador(roubo): ");
    scanf("%d", &R);
    
    printf("\n1 = J2 ACUSOU J1 DE ROUBO E 0 = J2 NÃO ACUSOU J1 DE ROUBO\n");
    printf("Ação do jogador(acusação): ");
    scanf("%d", &A);
    
    SOMA = J1 + J2;
    
    if ((SOMA%2 == 1 && P == 0) && (P == 1 && SOMA%2 == 0)){
    	VENCE = 1;
	} else if ((SOMA%2 == 0 && P == 0) || (P == 1 && SOMA%2 == 1)){
		VENCE = 2;
	}
	
    if (A == 1 && R == 1){
		VENCE = 2;
	} else if(R == 1 && A == 0){
    	VENCE = 1;
	}
    
    printf("\nO JOGADOR %d GANHA!\n", VENCE);
    
	return 0;
}
