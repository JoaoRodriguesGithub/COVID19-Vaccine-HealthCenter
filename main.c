#include "listaCentros.h"
#include "listaVacinas.h"
#include "listaUtentes.h"
#include <stdio.h>
#include <string.h>

void menuCriarUtente(ListaUtentes *lu, ListaCentros *lc, ListaVacinas *lv)
{
    Utente u = CriarUtente();
    printf("Introduza o centro de vacinacao: \n");
    u.codigoCentro = listarCentrosVacinacao(lc);
    printf("Introduza a vacina: \n");
    u.codigoVacina = listarVacinas(lv);

    acrescentarUtente(lu, u);
}

int main(int argc, char const *argv[])
{
    ListaCentros lc = { 0 };
    carregarDadosListaCentros(&lc);

    ListaUtentes lu = { 0 };
    carregarDadosListaUtentes(&lu);

    ListaVacinas lv = { 0 };
    carregarDadosListaVacinas(&lv);
    
    int opcao = 0;
    while (opcao != 9)
    {
        int idadeMedia = calcularIdadeMedia(&lu);

        printf("\t    ******Bem Vindo*******\n");
        printf("----------------------------------------------- \n");
        printf("\t***DASHBOARD*** \n");
        printf("Vacinas administradas: \n");
        printf("Media de idades dos utentes vacinados: %d\n", idadeMedia);
        printf("Quantidade de utentes vacinados por vacina: \n");
        printf("----------------------------------------------- \n");
        printf("\t        ***MENU*** \n");
        printf("Escolha o centro de vacinacao a que pertence: \n");
        printf("1- -------------\n");
        printf("2- Criar Centros\n");
        printf("3- Criar Vacina\n");
        printf("4- Criar Utente\n");
        printf("5- Remover Utente\n");
        printf("6- Inativar Vacina\n");
        printf("7- Editar dose de Vacina\n");
        printf("8- Listar utentes por vacina\n");
        printf("9- Sair\n");
        printf("Introduza uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            break;
        case 2:
            acrescentarCentroVacinacao(&lc);
            break;
        case 3:
            acrescentarVacina(&lv);
            break;
        case 4:
            menuCriarUtente(&lu, &lc, &lv);
            break;
         case 5:
             eliminarUtente(&lu);
            break;
         case 6:
             inativarVacina(&lv);
             break;
         case 7:
             editarDosesVacina(&lv);
             break;
         case 8:
             listarUtentesPorVacinas(&lv, &lu);
             break;
        case 9:
            gravarDadosListaCentros(&lc);
            gravarDadosListaUtentes(&lu);
            gravarDadosListaVacinas(&lv);

            break;
        default:
            printf("Opcao invalida. Tente novamente\n");
            break;
        }
    }
}
