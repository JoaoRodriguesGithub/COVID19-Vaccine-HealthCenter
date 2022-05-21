#include "utente.h"
#include <stdio.h>
#include <string.h>

// Função que permite criar um utente:
Utente CriarUtente()
{
    Utente u = { 0 };
    int centroVacinacao;
    printf("Introduza o numero de utente: ");
    scanf("%d", &u.numeroUtente);

    printf("Introduza o nome do utente: ");
    while (getchar() != '\n');
    fgets(u.nomeUtente, 100, stdin);
    u.nomeUtente[strlen(u.nomeUtente) - 1] = '\0';

    printf("Introduza a idade do utente: ");
    scanf("%d", &u.idadeUtente);

    printf("Introduza o contacto do utente: ");
    scanf("%d", &u.contactoUtente);

    return u;
}
