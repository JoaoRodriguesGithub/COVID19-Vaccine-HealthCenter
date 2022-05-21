#pragma once
#include"utente.h"
//Estrutura de dados para os centros de vacinação:
typedef struct sCentroVacinacao
{
    //variavel para o codigo do centro de vacinação:
    int codigoCentro;

    //variavel para escrever o nome do centro de vacinação
    char nomeCentro[100];

    //variavel para escrever a morada do centro de vacinação
    char moradaCentro[100];

    /*variavel que servirá para ativar ou inativar o centro de vacinação:
        Valor 0 significa inativo 
        Valor 1 significa ativo
    */
    int estadoCentroVacinacao;
} CentroVacinacao;

//Assinaturas:
// Função que permite criar um centro de vacinação:
CentroVacinacao CriarCentroVacinacao(int codigoCentro);