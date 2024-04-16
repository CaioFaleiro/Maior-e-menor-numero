#include <stdio.h>

// Função para encontrar o maior entre dois números
int encontrarMaior(int num1, int num2) {
    if (num1 > num2)
        return num1;
    else
        return num2;
}

// Função para encontrar o menor entre dois números
int encontrarMenor(int num1, int num2) {
    if (num1 < num2)
        return num1;
    else
        return num2;
}

int main() {
    int numero1, numero2;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    // Chamando as funções para encontrar o maior e o menor número
    int maior = encontrarMaior(numero1, numero2);
    int menor = encontrarMenor(numero1, numero2);

    printf("O maior número é: %d\n", maior);
    printf("O menor número é: %d\n", menor);

    return 0;
}
