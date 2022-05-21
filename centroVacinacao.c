#include "centroVacinacao.h"
#include <stdio.h>
#include<string.h>

// Função que permite criar um centro de vacinação:
CentroVacinacao CriarCentroVacinacao(int codigoCentro){
    CentroVacinacao c;
    
    printf("Introduza o nome do centro de vacinacao: ");
    while (getchar() != '\n');
    fgets(c.nomeCentro, 100, stdin);
    c.nomeCentro[strlen(c.nomeCentro) -1] = '\0';
    

    printf("Introduza a morada do centro de vacinacao: ");
    while (getchar() != '\n');
    fgets(c.moradaCentro, 100, stdin);
    c.moradaCentro[strlen(c.moradaCentro) -1] = '\0';

    c.codigoCentro = codigoCentro;
    return c;
}
