#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
#ifndef CONJUNTO_H_INCLUDED
#define CONJUNTO_H_INCLUDED
=======
#ifndef SETS_H_INCLUDED
#define SETS_H_INCLUDED


>>>>>>> af8d6f978f4892d297fa826ba95bf93b09dd9694


typedef int Tipo;

/*
typedef    struct {
                char nome[80]; // nome do aluno
                float notas[4];
                int cpf;
            }                   Aluno;
//*/



typedef int Logic;
#define TRUE 1
#define FALSE 0

#define GT 1
#define EQUAL 0
#define LT -1
typedef int Result;

typedef void (*funcaoDeForaQueImprime)(Tipo);// ponteiro para função
typedef Result (*funcaoDeForaQueCompara)(Tipo, Tipo);// ponteiro para função

Logic setsCreate();
Logic setsAddElement(char c1, Tipo e);
Logic setsRemoveElement(char c1, Tipo *e);
Logic setsBelongsTo(char c1, Tipo e);
Logic setsUnion(char c1, char c2, char c3);
Logic setsIntersection(char c1, char c2, char c3);
Logic setsNumberOfElements(char c1, int *total);
Logic setsIsIn(char c1, char c2, Logic *result);
// exemplo de uso setsUnion('K','H','C') ;
// conjunto K unido com H produzindo o conjunto C
Logic setsFreeSet(char conj);
Logic setsDestroy();


<<<<<<< HEAD

#endif // CONJUNTO_H_INCLUDED
=======
#endif // SETS_H_INCLUDED
>>>>>>> af8d6f978f4892d297fa826ba95bf93b09dd9694
