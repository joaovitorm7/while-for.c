#include <stdio.h>

int main () {
	float res,num1, num2;

	printf("Escreva um valor\n ");
	scanf("%f", &num1);
	printf("Escreva outro valor\n ");
	scanf("%f", &num2);

	for (  ; num2 == 0 ;  ) {
		printf("Digite outro valor\n ");
		scanf("%f", &num2);
	}
	
	res = num1 / num2;
	printf("A divisao e igual %.2f", res);


	return 0;
}