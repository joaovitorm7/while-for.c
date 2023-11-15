#include <stdio.h>

int main() {
    float a1, a2, media;

   while (a1 >= 0 && a1 <= 10 && a2 >= 0 && a2 <= 10) {
    printf("Escreva sua nota 1\n");
    scanf("%f", &a1);
    printf("Escreva sua nota 2\n");
    scanf("%f", a2);
    media = (a1 + a2) / 2;
    printf("Sua media simples é %.2f", media);
   }

  

    return 0;
}