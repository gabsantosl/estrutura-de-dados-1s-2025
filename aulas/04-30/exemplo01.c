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

    Item * D = (Item *) malloc (sizeof(Item));
    if(D == NULL){
    printf("ERRO: Não foi possível alocar memória para o item (música)!\n");
    return NULL;
    }
    strcpy(D->Titulo, "Aquarela");
    strcpy(D->Autor, "Toquinho");
    D-> Ano = 1983;
    D-> Anterior = NULL;
    D-> Proximo = NULL;

    Item * E = (Item *) malloc (sizeof(Item));
    if(E == NULL){
    printf("ERRO: Não foi possível alocar memória para o item (música)!\n");
    return NULL;
    }
    strcpy(E->Titulo, "Romaria");
    strcpy(E->Autor, "Renato Teixeira");
    E-> Ano = 1978;
    E-> Anterior = NULL;
    E-> Proximo = NULL;

    Item * F = (Item *) malloc (sizeof(Item));
    if(F == NULL){
    printf("ERRO: Não foi possível alocar memória para o item (música)!\n");
    return NULL;
    }
    strcpy(F->Titulo, "Eu nasci há dez mil anos atrás");
    strcpy(F->Autor, "Raul Seixas");
    F-> Ano = 1976;
    F-> Anterior = NULL;
    F-> Proximo = NULL;

    Item * G = (Item *) malloc (sizeof(Item));
    if(G == NULL){
    printf("ERRO: Não foi possível alocar memória para o item (música)!\n");
    return NULL;
    }
    strcpy(G->Titulo, "Cálice");
    strcpy(G->Autor, "Chico Buarque e Gilberto Gil");
    G-> Ano = 1978;
    G-> Anterior = NULL;
    G-> Proximo = NULL;

    Item * H = (Item *) malloc (sizeof(Item));
    if(H == NULL){
    printf("ERRO: Não foi possível alocar memória para o item (música)!\n");
    return NULL;
    }
    strcpy(H->Titulo, "Tempo perdido");
    strcpy(H->Autor, "Renato Russo");
    H-> Ano = 1986;
    H-> Anterior = NULL;
    H-> Proximo = NULL;

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