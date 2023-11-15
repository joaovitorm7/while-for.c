#include <stdio.h>

int main() {
	char nome[10];
	float quantidade, preco, total, totalPagar, desconto;
	
	printf("Escreva o nome do produto\n ");
	scanf("%s", &nome);
	printf("Escreva a quantidade adquirida\n ");
	scanf("%f", &quantidade);
	printf("Escreva o preco unitario\n ");
	scanf("%f", &preco);
	
	total = quantidade * preco;
	
	if (quantidade <= 5) {
		totalPagar = total - (total * 0.02);
		printf("Voce ira pagar %.2f\n ", totalPagar);
	} else 
	if (quantidade > 5 || quantidade <= 10) {
		totalPagar = total - (total * 0.03);
		("Voce ira pagar %.2f\n ", totalPagar);
	} else 
	if(quantidade > 10) {
		totalPagar = total - (total * 0.05);
		("Voce ira pagar %.2f\n ", totalPagar);
	}
	
	
	
	return 0;
}