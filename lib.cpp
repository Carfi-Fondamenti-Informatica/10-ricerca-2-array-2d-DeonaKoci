#include <iostream>
#include "lib.h"

/*
using namespace std;

void init(char mat[], int n) {
    for (int i = 0; i < n; i++) {
        mat[i] = ' ';
    }
}

void init(char mat[5][15]){
    for(int i=0;i<5;i++){
        init(mat[i],15);
    }
}


void inserimento(char nomi[5][15], char cognomi[5][15]){
    for(int i=0; i<5;i++){
        inserimento(nomi[i],15);
        inserimento(cognomi[i],15);
    }
}

void inserimento(char nomi, int dim_max){
    dim_max=15;
    for(int i=0; i<5;i++){
        inserimento(nomi[i],15);
    }
}
int ricerca(char nomi[5][15], char cognomi[5][15], char nome[], char cognome[]) {
    for (int i = 0; i < 5; i++) {
        if (strcmp(nomi[i], nome) == 0 && strcmp(cognomi[i], cognome) == 0) {
            return i;
        }
    }
    return -1;
}
*/

bool cerca(char listanome[10][20], int &pos, char a[]){
    for(int i=0;i<10;i++){

        for(int j=0;j<20;j++){
            if(listanome[i][j] != a[j]){
                  j = 20;
            }else{

                    if(j==19){
                          pos = (i);

                           return true;

                    }}}
    }
    return false;
}
