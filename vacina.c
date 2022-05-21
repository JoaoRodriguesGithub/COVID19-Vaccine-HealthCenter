#include "vacina.h"
#include <stdio.h>
#include <string.h>

// Função que permite criar uma vacina:

Vacina CriarVacina(int vacinaID)
{
    Vacina v;

    printf("Introduza o codigo da vacina: ");
    scanf("%d", &v.codigoVacina);

    printf("Introduza a designacao da vacina: ");
    while (getchar() != '\n');
    fgets(v.designacaoVacina, 100, stdin);
    v.designacaoVacina[strlen(v.designacaoVacina) - 1] = '\0';

    printf("Introduza o numero total de doses da vacina: ");
    scanf("%d", &v.numeroDoses);

    printf("Introduza o tempo necessario de espera (numero de meses) ente duas dosagens: ");
    scanf("%d", &v.tempoEspera);

    v.vacinaID = vacinaID;
    return v;
}