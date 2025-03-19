#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Selecao(int *V, int N){

    int i;

    for(i=0; i < N - 1; i++){
        int minIndex = i;
        for (int j = i + 1; j < N; j++){
            if(V[j] < V[minIndex]){
                minIndex = j;

                int temp = V[minIndex];
                V[minIndex] = V[i];
                V[i] = temp;
            }
        }
    }
}