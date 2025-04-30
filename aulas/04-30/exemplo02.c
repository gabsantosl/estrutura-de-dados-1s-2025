#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Item{
    char Titulo[50];
    char Autor[100];
    int Ano;
    struct Item * Proximo;
    struct Item * Anterior;
} Item;

int main(){
    printf("Tamanho %d.\n", sizeof(Item));

    Item * criarItem(char *Titulo, char *Autor, int Ano) {
        Item * X = (Item *) malloc(sizeof(Item));
        if (X == NULL) {
        printf("ERRO: Não foi possível alocar memória para o item (música)!\n");
        return NULL;
        }
        strcpy(X->Titulo, Titulo);
        strcpy(X->Autor, Autor);
        X->Ano = Ano;
        return X;
    }

    Item *D = criarItem("Aquarela", "Toquinho", 1983);
    Item *E = criarItem("Romaria", "Renato Teixeira", 1978);
    Item *F = criarItem("Eu nasci há dez mil anos atrás", "Raul Seixas", 1976);
    Item *G = criarItem("Cálice", "Chico Buarque e Gilberto Gil", 1978);
    Item *H = criarItem("Tempo perdido", "Renato Russo", 1986);

    // Ordem das Músicas: D > E > F > G > H

    D -> Anterior = NULL;
    D -> Proximo = E;

    E -> Anterior = D;
    E -> Proximo = F;

    
    F -> Anterior = E;
    F -> Proximo = G;
    
    G -> Anterior = F;
    G -> Proximo = H;

    H -> Anterior = G;
    H -> Proximo = NULL;
}

git config --global user.email "gabsantosleite@gmail.com"
git config --global user.name "Gabriela Santos"