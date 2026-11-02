/* LAB 1 - Lista Sequencial  (trabalho em pares)
   Completa as funções marcadas com TODO. O main já testa tudo.
   BRONZE: contar, maior     PRATA: inserirInicio, removerValor
   OURO:   inverter, inserirOrdenado                                   */
#include <stdio.h>
#define MAX 10

typedef struct // Object in JavaScrpit (fixed type and has a fixed memory layout)
{
    int itens[MAX];
    int tamanho;
} Lista;

void inicializar(Lista *l) { l->tamanho = 0; }

int inserirFim(Lista *l, int valor)
{
    if (l->tamanho == MAX) // l->tamamnho != Lista->tamanho
        return 0;
    l->itens[l->tamanho++] = valor;
    return 1;
}

void imprimir(Lista *l)
{
    printf("[");
    for (int i = 0; i < l->tamanho; i++)
        printf("%d%s", l->itens[i], i < l->tamanho - 1 ? ", " : ""); // condition ? value if true : value if false
    printf("]\n");
}

/* BRONZE 1: quantas vezes o valor aparece na lista? */
int contar(Lista *l, int valor)
{
    int vezes = 0;

    for (int i = 0; i < l->tamanho; i++)
    {
        if (valor == l->itens[i])
        {
            vezes++;
        }
    }
    return vezes;
}

/* BRONZE 2: devolve o maior valor (assume lista não vazia) */
int maior(Lista *l)
{
    int maior = l->itens[0];

    for (int inicial = 1; inicial < l->tamanho; inicial++)
    {
        if (l->itens[inicial] > maior)
        {
            maior = l->itens[inicial];
        }
    }
    return maior;
}

/* PRATA 1: insere na posição 0, empurrando todos para a direita */
int inserirInicio(Lista *l, int valor)
{ // How just change tamanho just in this function
    for (int i = l->tamanho; i > 0; i--)
    {
        l->itens[i] = l->itens[i - 1];
    }
    l->tamanho++;
    l->itens[0] = valor;
}

/* PRATA 2: remove a PRIMEIRA ocorrência do valor. Devolve 1 se removeu. */
int removerValor(Lista *l, int valor)
{
    for (int i = 0; i < l->tamanho; i++)
    {
        if (l->itens[i] == valor)
        {
            for (int j = i; j < l->tamanho; j++)
            {
                l->itens[j] = l->itens[j + 1];
            }
            l->tamanho--;
            return -1;
        }
    }
    return 0;
}

/* OURO 1: inverte a lista no próprio vetor (sem vetor auxiliar) */
void inverter(Lista *l)
{ // void means the function return no value
    int final = l->tamanho - 1;

    for (int start = 0; start < final; start++)
    {
        int temporary = l->itens[start];

        l->itens[start] = l->itens[final];
        l->itens[final] = temporary;

        final = final - 1;
    }
}

/* OURO 2: assume a lista ordenada; insere mantendo a ordem crescente */
int inserirOrdenado(Lista *l, int valor) // * expetes a pointer to a Lista
{
    for (int inicial = 0; inicial < l->tamanho; inicial++)
    {
        if (valor < l->itens[inicial])
        {
            ;
        }
    }
    for (int final = l->tamanho; final > 0; final--)
    {
        l->itens[final] = l->itens[final - 1];
    }
    return 1;
} // inicial + 1 (alteração imediata), inicial++ (pós-incremento)

int main(void)
{
    Lista l;
    inicializar(&l);
    inserirFim(&l, 5);
    inserirFim(&l, 5);
    inserirFim(&l, 2);
    inserirFim(&l, 20);
    imprimir(&l); /* [5, 8, 5, 2]          */
    printf("contar(5) = %d (esperado 2)\n", contar(&l, 5));
    printf("maior     = %d (esperado 20)\n", maior(&l));

    inserirInicio(&l, 1);
    imprimir(&l); /* [1, 5, 8, 5, 2]       */
    removerValor(&l, 5);
    imprimir(&l); /* [1, 8, 5, 2]          */
    inverter(&l);
    imprimir(&l); /* [2, 5, 8, 1]          */

    Lista o; // Creates a new list variable called o (Two lists (l -> used for the first tests and o -> used for the ordered-insertion testes))
    inicializar(&o);
    inserirOrdenado(&o, 30);
    inserirOrdenado(&o, 40);
    inserirOrdenado(&o, 10);
    inserirOrdenado(&o, 20);
    imprimir(&o); /* [10, 20, 30, 40]      */
    return 0;
}