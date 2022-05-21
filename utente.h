#pragma once
#include "vacina.h"
//Estrutura de dados para os utentes:
typedef struct sUtente{
    //variavel para ter o identificador do centro:
    int codigoCentro;

    //variavel para ter o identificador do centro:
    int codigoVacina;
    
    //variavel para escrever o numero de utente:
    int numeroUtente;
    
    //variavel para escrever o nome de utente:
    char nomeUtente[100];
    
    //variavel para escrever a idade do utente:
    int idadeUtente;
    
    //variavel para escrever o contacto do utente:
    int contactoUtente;
    
    //variavel para escrever qual a vacina tomada:
    int vacinaTomada;

    //variavel para escrever o numero de vacinas que o utente já tomou:
    int nDosesTomadas;

    //variavel para escrever a data em que a dose foi tomada:
    char dataAdministrada [20];

} Utente;

//Assinaturas:
Utente CriarUtente();