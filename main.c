#include <stdio.h>

// Fun��o para encontrar o maior entre dois n�meros
int encontrarMaior(int num1, int num2) {
    if (num1 > num2)
        return num1;
    else
        return num2;
}

// Fun��o para encontrar o menor entre dois n�meros
int encontrarMenor(int num1, int num2) {
    if (num1 < num2)
        return num1;
    else
        return num2;
}

int main() {
    int numero1, numero2;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &numero2);

    // Chamando as fun��es para encontrar o maior e o menor n�mero
    int maior = encontrarMaior(numero1, numero2);
    int menor = encontrarMenor(numero1, numero2);

    printf("O maior n�mero �: %d\n", maior);
    printf("O menor n�mero �: %d\n", menor);

    return 0;
}
