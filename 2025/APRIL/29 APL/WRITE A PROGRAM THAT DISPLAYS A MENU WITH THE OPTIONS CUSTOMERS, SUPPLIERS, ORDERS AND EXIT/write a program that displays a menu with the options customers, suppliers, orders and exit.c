#include <stdio.h>

int main () {
    char opcao;
    do {
        printf("\tMENU PRINCIPAL\n");
        printf("\n\n\t\t CLIENTES");
        printf("\n\n\t\t FORNECEDORES");
        printf("\n\n\t\t ENCOMENDAS");
        printf("\n\n\t\t SAIR");
        printf("\n\n\n\n\t\t ESCOLHA UMA OPCAO: ");
        scanf("%c", &opcao);
        fflush(stdin); // limpar o buffer do teclado
        switch (opcao)
        {
            case 'c' :
            case 'C' : puts("OPCAO CLIENTES"); break;
            case 'f' :
            case 'F' : puts("OPCAO FORNECEDORES"); break;
            case 'e' :
            case 'E' : puts("OPCAO ENCOMENDAS"); break;
            case 's' :
            case 'S' : puts("OPCAO SAIR"); break;
            default : puts("OPCAO INVALIDA");
        }
        getchar(); // pausa
    }
    while (opcao != 's' && opcao != 'S');
}