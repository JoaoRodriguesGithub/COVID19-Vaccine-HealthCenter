#include "listaVacinas.h"
#include <stdio.h>

//Funcão que permite listar as vacinas:
int listarVacinas(ListaVacinas *lv){
    int vacinaId;
    for (int i = 0; i < lv->contarVacinas; i++)
    {
        if (lv->vacinas[i].estadoVacina != 0)
        {
            printf("%d -> %s \n", lv->vacinas[i].codigoVacina, lv->vacinas[i].designacaoVacina);
        }
        

        //printf("%d -> %s \n", lv->vacinas[i].codigoVacina, lv->vacinas[i].designacaoVacina);
    }
    scanf("%d", &vacinaId);

    return vacinaId;
}

void inativarVacina(ListaVacinas *lv) 
{
    int vacinaId;
    for (int i = 0; i < lv->contarVacinas; i++)
    {
        printf("%d -> %s \n", lv->vacinas[i].codigoVacina, lv->vacinas[i].designacaoVacina);
    }

    scanf("%d", &vacinaId);

    for (int i = 0; i < lv->contarVacinas; i++)
    {
        if (lv->vacinas[i].codigoVacina == vacinaId)
        {
            lv->vacinas[i].estadoVacina = 0;
            break;
        }
    }
}

void editarDosesVacina(ListaVacinas* lv) 
{
    int vacinaId;
    int doses;
    for (int i = 0; i < lv->contarVacinas; i++)
    {
        printf("%d -> %s \n", lv->vacinas[i].codigoVacina, lv->vacinas[i].designacaoVacina);
    }

    scanf("%d", &vacinaId);

    printf("Escolha numero de doses?\n");
    scanf("%d", &doses);

    for (int i = 0; i < lv->contarVacinas; i++)
    {
        if (lv->vacinas[i].codigoVacina == vacinaId)
        {
            lv->vacinas[i].numeroDoses = doses;
            break;
        }
    }
}

//Funcão que permite acrescentar vacinas à lista de vacinas:
void acrescentarVacina(ListaVacinas *lv)
{
    Vacina v = CriarVacina(lv->contarVacinas);
    lv->vacinas[lv->contarVacinas] = v;
    lv->contarVacinas++;
}

//Funcão que permite gravar vacinas da lista de vacinas:
void gravarDadosListaVacinas(ListaVacinas *lv)
{
    FILE *ficheiro = fopen("listaVacinas.dat", "wb");
    rewind(ficheiro);
    fwrite(lv, sizeof(ListaVacinas), 1, ficheiro);
    fclose(ficheiro);
}

//Funcão que permite carregar vacinas da lista de vacinas:
void carregarDadosListaVacinas(ListaVacinas *lv)
{
    FILE *ficheiro;
    ficheiro = fopen("listaVacinas.dat", "rb");

    if (ficheiro == NULL)
        return;

    fread(lv, sizeof(ListaVacinas), 1, ficheiro);

    fclose(ficheiro);
}
