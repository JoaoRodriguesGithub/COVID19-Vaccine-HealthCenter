#include "listaUtentes.h"
#include "listaVacinas.h"
#include <stdio.h>

//Funcão que permite acrescentar utentes à lista de utentes:
void acrescentarUtente(ListaUtentes *lu, Utente u)
{
    lu->utentes[lu->contarUtentes] = u;
    lu->contarUtentes++;
}

//Funcão que permite editar um utente:
void editarUtente()
{
}

void listarUtentesPorVacinas(ListaVacinas* lv, ListaUtentes *lu)
{
    int codigoVacina;
    for (int i = 0; i < lv->contarVacinas; i++)
    {
        printf("%d -> %s \n", lv->vacinas[i].codigoVacina, lv->vacinas[i].designacaoVacina);
    }

    scanf("%d", &codigoVacina);

    printf("\nUtentes com a vacina %d:\n", codigoVacina);
    for (int i = 0; i < lu->contarUtentes; i++)
    {
        if (lu->utentes[i].codigoVacina == codigoVacina)
        {
            printf("%s\n", lu->utentes[i].nomeUtente);
        }
    }
}

int calcularIdadeMedia(ListaUtentes* lu)
{
    int total = 0;
    for (int i = 0; i < lu->contarUtentes; i++)
    {
        total += lu->utentes[i].idadeUtente;
    }

    return lu->contarUtentes == 0 ? 0 : total / lu->contarUtentes;
}

//Funcão que permite remover um utente vacinado:
void eliminarUtente(ListaUtentes *lu)
{
    int numeroUtenteAremover = 0;

    printf("LISTA ATUAL DE UTENTES\n");
    for (int i = 0; i < lu->contarUtentes; i++)
    {
        printf("%d -> %s\n", i, lu->utentes[i].nomeUtente);
    }

    printf("Insira qual o numero de utente que pretende remover: \n");
    scanf("%d", &numeroUtenteAremover);
    
    for (int j = numeroUtenteAremover + 1; j < lu->contarUtentes; j++)
    {
        lu->utentes[j - 1] = lu->utentes[j];
    }

    lu->contarUtentes = lu->contarUtentes - 1;
}

//Funcão que permite gravar utentes da lista de utentes:
void gravarDadosListaUtentes(ListaUtentes *lu)
{
    FILE *ficheiro = fopen("listaUtentes.dat", "wb");
    rewind(ficheiro);
    fwrite(lu, sizeof(ListaUtentes), 1, ficheiro);
    fclose(ficheiro);
}

//Funcão que permite carregar utentes da lista de utentes:
void carregarDadosListaUtentes(ListaUtentes *lu)
{
    FILE *ficheiro;
    ficheiro = fopen("listaUtentes.dat", "rb");

    if (ficheiro == NULL)
        return;

    fread(lu, sizeof(ListaUtentes), 1, ficheiro);

    fclose(ficheiro);
}