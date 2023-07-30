#include <stdio.h>

#define MAX_ENTREVISTADOS 100 // Define o número máximo de entrevistados

int main() {
    char sexo[MAX_ENTREVISTADOS];
    char opiniao[MAX_ENTREVISTADOS];
    int n;
    int contadorFemininoGostou = 0; // Contador para o sexo feminino que gostou do produto
    int contadorMasculinoNaoGostou = 0; // Contador para o sexo masculino que não gostou do produto

    // leitura do número de entrevistados
    printf("Digite o numero de entrevistados: ");
    scanf("%d", &n);

    // verificação para evitar que o número de entrevistados exceda o limite
    if (n > MAX_ENTREVISTADOS) {
        printf("Numero de entrevistados excede o limite!\n");
        return 1;
    }

    // leitura das respostas de cada entrevistado e contagem das categorias
    for (int i = 0; i < n; i++) {
        printf("Entrevistado %d:\n", i + 1);

        // leitura do sexo (M/F)
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo[i]);

        // leitura da opinião sobre o produto (gostou/não gostou)
        printf("Opiniao sobre o produto (gostou/não gostou): ");
        scanf(" %c", &opiniao[i]);

        // contagem das respostas para a porcentagem
        if (sexo[i] == 'F' && opiniao[i] == 'g') {
            contadorFemininoGostou++;
        } else if (sexo[i] == 'M' && opiniao[i] == 'n') {
            contadorMasculinoNaoGostou++;
        }
    }

    // cálculo das porcentagens
    float porcentagemFemininoGostou = (float)contadorFemininoGostou / n * 100.0;
    float porcentagemMasculinoNaoGostou = (float)contadorMasculinoNaoGostou / n * 100.0;

    // exibição dos resultados
    printf("\nResultados da pesquisa:\n");
    for (int i = 0; i < n; i++) {
        printf("Entrevistado %d: Sexo - %c, Opiniao - %c\n", i + 1, sexo[i], opiniao[i]);
    }

    printf("\nPorcentagem de pessoas do sexo feminino que gostaram do produto: %.2f%%\n", porcentagemFemininoGostou);
    printf("Porcentagem de pessoas do sexo masculino que nao gostaram do produto: %.2f%%\n", porcentagemMasculinoNaoGostou);

    return 0;
}
