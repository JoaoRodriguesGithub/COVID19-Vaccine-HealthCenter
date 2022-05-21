#pragma once
#include "vacina.h"

typedef struct sListaVacinas
{
    Vacina vacinas[25];
    int contarVacinas;
    Vacina v;
} ListaVacinas;

//Assinaturas:
//Funcão que permite listar as vacinas:
int listarVacinas(ListaVacinas *lv);
void inativarVacina(ListaVacinas *lv);
void editarDosesVacina(ListaVacinas* lv);

//Funcão que permite acrescentar vacinas à lista de vacinas:
void acrescentarVacina(ListaVacinas *lv);
void gravarDadosListaVacinas(ListaVacinas *lv);
void carregarDadosListaVacinas(ListaVacinas *lv);