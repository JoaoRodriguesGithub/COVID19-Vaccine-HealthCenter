#pragma once
#include "centroVacinacao.h"

typedef struct sListaCentros
{
    CentroVacinacao centros[100];
    int contarCentros;
} ListaCentros;

//Assinaturas:
int listarCentrosVacinacao(ListaCentros* lc);
void acrescentarCentroVacinacao(ListaCentros *lc);
//Função que pesquisa centros de vacinação por codigoCentro:
void porcurarCentroVacinacaoPorCodigo(int codigoCentro, ListaCentros lc);
void carregarDadosListaCentros(ListaCentros *lc);
void gravarDadosListaCentros(ListaCentros *lc);