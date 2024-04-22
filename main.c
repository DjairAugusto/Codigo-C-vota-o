#include <stdio.h>

int main() {
    // candidatos Joao=1 Ana=2
    // ler o voto, a idade e o gênero (Masc=1 / Fem=2) de todos os 5 eleitores
    int voto[5];
    int genero[5];
    int cmasc = 0;
    int cfem = 0;
    int idade[5];
    int i;
    int soma = 0;
    int votoana = 0;
    int votojao = 0;
    float mediatotal;
    int idades_mulheres_ana[5];
    int idades_homens_joao[5];
    int cont_mulheres_ana = 0;
    int cont_homens_joao = 0;

    // Entrada de dados
    for (i = 0; i < 5; i++) {
        printf("\nQual é o voto da pessoa %d, candidato Joao(1) Ana(2): ", i + 1);
        scanf("%d", &voto[i]);

        // Separar votos
        if (voto[i] == 1) {
            votojao++;
        } else {
            votoana++;
        }

        printf("\nQual é o genero da pessoa %d, Masc=1 Fem=2: ", i + 1);
        scanf("%d", &genero[i]);

        // Separar generos
        if (genero[i] == 1) {
            cmasc++;
        } else {
            cfem++;
        }

        // Idade
        printf("\nQual é a idade da pessoa %d: ", i + 1);
        scanf("%d", &idade[i]);
        soma += idade[i];

        // Separar idades
        if (voto[i] == 2 && genero[i] == 2) {
            idades_mulheres_ana[cont_mulheres_ana++] = idade[i];
        }

        if (voto[i] == 1 && genero[i] == 1) {
            idades_homens_joao[cont_homens_joao++] = idade[i];
        }
    }

    // Saída de dados
    mediatotal = (float)soma / 5;
    printf("\nMedia total das idades: %.2f", mediatotal);
    printf("\nTotal de votos Ana: %d", votoana);
    printf("\nTotal de votos Joao: %d", votojao);

    printf("\nIdades das mulheres que votaram em Ana:");
    for (i = 0; i < cont_mulheres_ana; i++) {
        printf(" %d", idades_mulheres_ana[i]);
    }

    printf("\nIdades dos homens que votaram em Joao:");
    for (i = 0; i < cont_homens_joao; i++) {
        printf(" %d", idades_homens_joao[i]);
    }

    return 0;
}
