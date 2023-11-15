#include <stdio.h>

int main () {
	float codigo, nascimento, ingresso, idade, tempo;
	int  idade_atual, tempo_de_trabalho;
	
	printf("Digite o codigo\n ");
	scanf("%f", &codigo);
	printf("Digite seu ano de nascimento\n ");
	scanf("%f", &nascimento);
	printf("Digite o ano de ingresso na impresa\n ");
	scanf("%f", &ingresso);
	
	idade_atual = 2023 - nascimento;
	printf("Sua idade %d\n", idade_atual);
	
	tempo_de_trabalho = 2023 - ingresso;
	printf("Voce tem de tempo de trabalho %d anos\n", tempo_de_trabalho);
	
	if ( idade >= 65) {
		printf("Requerer aposentadoria?");
	} else 
	if(idade >= 60 && tempo_de_trabalho >= 25) {
		printf("Requerer aposentadoria?");
	} else 
	if (tempo_de_trabalho >= 25) {
		printf("Requerer aposentadoria");
	} else {
		printf("Nao requerer");
	}


	return 0;
}