/*
1) Implemente em C uma função int buscar(int *v, int n, int elem) que receba um array v de inteiros, um valor inteiro elem e retorne a posição de elem no array caso ele seja encontrado; caso
contrário retorne -1.
*/

#include <stdio.h>

int buscar(int *v, int elem) {
    int veracidade = 0;

    for (int n =0; n < 6; n++){
        if (v[n] == elem){
            printf("%d", n);
            return veracidade = 0; //outro método é usar break. return também encerra o loop
        }
        else {
            veracidade = 1;
        }
    }
    if (veracidade == 1) {
    printf("%d", -1);
    }

}

int main(void){
    int v[6] = {7,8,9,10,11,12};
    int elem;
    printf("Digite um número inteiro positivo \n");
    scanf("%d", &elem);
    buscar(v,elem); //aqui não precisa passar um ponteiro dentro, somente na função que eu crio que precisa passar como ponteiro
    return 0;
}