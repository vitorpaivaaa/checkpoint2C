#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Integrantes do Grupo:
// Nome: Seu Nome 1, R.M.: 12345
// Nome: Seu Nome 2, R.M.: 67890
// Nome: Seu Nome 3, R.M.: 11223
// Nome: Seu Nome 4, R.M.: 44556

// Função para calcular a sequência de Fibonacci
void fibonacci(int n) {
    int fib[50]; // Vetor para armazenar a sequência [cite: 4, 16]
    fib[0] = 0;  // Inicializa os primeiros dois elementos [cite: 4, 17]
    fib[1] = 1;

    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2]; // Calcula os elementos subsequentes [cite: 4]
    }

    printf("Sequência de Fibonacci: ");
    for (int i = 0; i < n; i++) {
        printf("%d", fib[i]);
        if (i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");
}

// Função para calcular os fatoriais
void fatorial(int n) {
    int fat[20]; // Vetor para armazenar os fatoriais [cite: 6, 16]
    fat[0] = 1;  // Fatorial de 1 é 1

    for (int i = 1; i < n; i++) {
        fat[i] = fat[i - 1] * (i + 1); // Calcula os fatoriais [cite: 6]
    }

    printf("Fatoriais:\n");
    for (int i = 0; i < n; i++) {
        printf("%d! = %d\n", i + 1, fat[i]); // Imprime no formato especificado [cite: 7]
    }
}

// Função para verificar se uma palavra é um palíndromo
void palindromo() {
    char palavra[101]; // Vetor para armazenar a palavra (máximo 100 caracteres + null) [cite: 7]

    printf("Digite uma palavra: ");
    scanf("%s", palavra); // Lê a palavra do usuário [cite: 7, 17]

    int comprimento = strlen(palavra);
    int ehPalindromo = 1; // Assume que é palíndromo inicialmente

    for (int i = 0; i < comprimento / 2; i++) {
        if (palavra[i] != palavra[comprimento - 1 - i]) { // Compara os caracteres [cite: 8]
            ehPalindromo = 0; // Se encontrar diferença, não é palíndromo
            break;
        }
    }

    if (ehPalindromo) {
        printf("A palavra é um palindromo.\n"); // Imprime a mensagem соответствующую [cite: 9, 10]
    } else {
        printf("A palavra NÃO é um palindromo.\n"); // Imprime a mensagem соответствующую [cite: 9, 11]
    }
}

// Função para verificar se uma string é substring de outra
void substring() {
    char str1[100];
    char str2[100];

    printf("Digite a primeira string: ");
    scanf("%s", str1); // Lê a primeira string [cite: 12, 17]

    printf("Digite a segunda string: ");
    scanf("%s", str2); // Lê a segunda string [cite: 12, 17]

    if (strstr(str1, str2) != NULL) { // Verifica se str2 é substring de str1 [cite: 12]
        printf("A segunda string está contida na primeira.\n"); // Imprime a mensagem соответствующую [cite: 13, 14]
    } else {
        printf("A segunda string NÃO está contida na primeira.\n"); // Imprime a mensagem соответствующую [cite: 13, 14]
    }
}

int main() {
    int opcao;

    do {
        printf("\n===== MENU DE EXERCÍCIOS =====\n"); // Apresenta o menu [cite: 2, 3]
        printf("1 - Sequência de Fibonacci\n");
        printf("2 - Fatoriais\n");
        printf("3 - Verificar Palindromo\n");
        printf("4 - Verificar Substring\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) { // Controla o fluxo do programa [cite: 18]
            case 1: {
                int n;
                printf("Digite a quantidade de termos da sequência de Fibonacci (1 a 50): ");
                scanf("%d", &n);
                if (n >= 1 && n <= 50) { // Valida a entrada [cite: 3]
                    fibonacci(n); // Chama a função fibonacci [cite: 15]
                } else {
                    printf("Quantidade inválida.\n");
                }
                break;
            }
            case 2: {
                int n;
                printf("Digite um número inteiro (1 a 20): ");
                scanf("%d", &n);
                if (n >= 1 && n <= 20) { // Valida a entrada [cite: 5]
                    fatorial(n); // Chama a função fatorial [cite: 15]
                } else {
                    printf("Número inválido.\n");
                }
                break;
            }
            case 3:
                palindromo(); // Chama a função palindromo [cite: 15]
                break;
            case 4:
                substring(); // Chama a função substring [cite: 15]
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 0);

    return 0;
}
