#include "Fila.h"

//*
// retire somente a primeira letra da linha acima (o /) e
// complete o c�digo ao final implementando fila com lista encadeada

#define MAX 4
Tipo vetor[MAX];
int count;
int primeiro;
int ultimo;

Logico qIn(Tipo e){
    if (qIsEmpty()){
        primeiro = ultimo = 0;
        vetor[ultimo] = e;
        count = 1;
        return TRUE;
    }
    if (qIsFull())
        return FALSE;
    count++;
    ultimo = (ultimo + 1) % MAX;//wrap around
    vetor[ultimo] = e;
    return TRUE;
}
Logico qOut(Tipo *e){
    if (qIsEmpty())
        return FALSE;
    count--;
    *e = vetor[primeiro];
    primeiro = (primeiro + 1) % MAX;//wrap around
    return TRUE;
}

Logico qCreate(){
    count = 0; // zero elementos na fila
    primeiro = ultimo = -1;
    return TRUE;
}
Logico qDestroy(){
    primeiro = ultimo = -1;
    count = 0; // zero elementos na fila
    return TRUE;
}
Logico qIsFull(){
    if (count == MAX)
        return TRUE;
    return FALSE;
}
Logico qIsEmpty(){
    if (count == 0)
        return TRUE;
    return FALSE;
}
Logico qCount(int *total){
    *total = count;
    return TRUE;
}
//*/  // fim do codigo de fila com vetor


// aqui come�a o seu trabalho de fila com lista encadeada
typedef struct node {
    Tipo e;
    struct node * next;
} Node;

Node * first;
Node * last;

// implemente todas as fun��es de fila
