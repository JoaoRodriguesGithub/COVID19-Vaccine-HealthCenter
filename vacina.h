#pragma once
//Estrutura de dados para vacinas:
typedef struct sVacina{
    
    //variavel para escrever o código de vacina:
    int vacinaID;
    
    //variavel para escrever o código de vacina:
    int codigoVacina;
    
    //variavel para escrever a designacao da vacina:
    char designacaoVacina[100];

    //variavel para escrever o numero de doses disponíveis:
    int numeroDoses;

    //variavel para escrever o tempo necessário de espera (meses) entre duas dosagens:
    int tempoEspera;

    /*variavel que servirá para ativar ou inativar vacinas:
        Valor 0 significa inativo c
        Valor 1 significa ativo
    */
    int estadoVacina; 
} Vacina;

//Assinaturas:
// Função que permite criar uma vacina:
Vacina CriarVacina(int vacinaID);