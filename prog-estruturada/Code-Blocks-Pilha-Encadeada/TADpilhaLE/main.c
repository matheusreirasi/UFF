#include "Pilha.h"

int main(){
    printf("Teste de Pilha!\n");

    Aluno vet[] = {
        { "Ana", {8,7,0,0}, 1234567},
        { "Bia", {8,10,0,0}, 1234568},
        { "Dri", {8,10,0,0}, 1234570},
        { "Juli", {8,10,0,0}, 1234571},
        { "Edu", {9,8,0,0}, 1234569}
    };

    stCreate();
    int tamanho = sizeof(vet)/sizeof(Tipo);
    for (int i=0;i<tamanho;i++){
        if (stIn(vet[i]) == FALSE){
            printf("nao consegui colocar %s\n", vet[i].nome);
        } else {
            printf("entrou %s\n", vet[i].nome);
        }
    }
    while (!stIsEmpty()){
        Tipo e;
        stOut(&e);
        printf("saiu %s\n", e.nome);
    }
    stDestroy();

    return 0;
}
