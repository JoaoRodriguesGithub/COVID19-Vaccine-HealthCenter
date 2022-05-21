#include "listaCentros.h"
#include<stdio.h>
#include<stdlib.h>

//
int listarCentrosVacinacao( ListaCentros* lc){
    int centroId;
    for (int i = 0; i < lc->contarCentros; i++)
    {
        printf("%d -> %s \n", lc->centros[i].codigoCentro, lc->centros[i].nomeCentro);
    }
    scanf("%d", &centroId);

    return centroId;
}

//Funcão que permite acrescentar centros a lista de centros:
void acrescentarCentroVacinacao(ListaCentros *lc)
{
    CentroVacinacao c = CriarCentroVacinacao(lc->contarCentros);
    lc->centros[lc->contarCentros] = c;
    lc ->contarCentros++;
}

//Função que pesquisa centros de vacinação por codigoCentro:
void porcurarCentroVacinacaoPorCodigo(int codigoCentro, ListaCentros lc){
    for (int i = 0; i < lc.contarCentros; i++)
    {
        if(lc.centros[i].codigoCentro == codigoCentro){
            printf("Nome Centro: %s", lc.centros[i].nomeCentro);
        }
    }
}

//Funcão que permite carregar centros a lista de centros:
void carregarDadosListaCentros(ListaCentros *lc){
    FILE *ficheiro;
    ficheiro = fopen("listaCentros.dat", "rb");

    if(ficheiro == NULL) return;

    fread(lc, sizeof(ListaCentros), 1, ficheiro);

    fclose(ficheiro);
}

//Funcão que permite gravar centros a lista de centros:
void gravarDadosListaCentros(ListaCentros *lc) {
    FILE * ficheiro = fopen("listaCentros.dat", "wb");
    rewind(ficheiro);
    fwrite(lc, sizeof(ListaCentros), 1, ficheiro);
    fclose(ficheiro);
}