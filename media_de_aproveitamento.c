#include <stdio.h>

int main () {
	float n1, n2, n3, media_dos_exercicios, media_de_aproveitamento;
	
	printf("Diga sua primeira nota ");
	scanf("%f", &n1);
	printf("Diga sua segunda nota ");
	scanf("%f", &n2);
	printf("Diga sua terceira nota ");
	scanf("%f", &n3);
	printf("Diga sua media dos exercicios ");
	scanf("%f", &media_dos_exercicios);
	
	
	media_de_aproveitamento = (n1 + n2 + n3 + media_dos_exercicios) / 7;
	printf("Sua media de aproveitamento foi %f\n", media_de_aproveitamento);
	
	if (media_de_aproveitamento >= 9) {
		printf("Conceito A");
	} else 
	if (media_de_aproveitamento >= 7.5 && media_de_aproveitamento < 9) {
		printf("Conceito B");
	} else 
	if (media_de_aproveitamento >= 6 && media_de_aproveitamento < 7.5) {
		printf("Conceito C");
	} else 
	if (media_de_aproveitamento < 6) {
		printf("Coceito D"); 
	}
	
	
	return 0;
}