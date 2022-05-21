#pragma once
#include "utente.h"
#include "listaVacinas.h"

typedef struct sListaUtentes
{
    Utente utentes[100];
    int contarUtentes;
} ListaUtentes;

//Assinaturas:
//Listar todos os utentes:
void listarUtentes(ListaUtentes lu);

//Funcão que permite remover um utente vacinado:
void eliminarUtente(ListaUtentes *lu);

//Funcão que permite acrescentar utentes à lista de utentes:
void acrescentarUtente(ListaUtentes *lu, Utente u);

//Funcão que permite gravar utentes da lista de utentes:
void gravarDadosListaUtentes(ListaUtentes *lu);

//Funcão que permite carregar utentes da lista de utentes:
void carregarDadosListaUtentes(ListaUtentes *lu);

void listarUtentesPorVacinas(ListaVacinas* lv, ListaUtentes* lu);

int calcularIdadeMedia(ListaUtentes* lu);