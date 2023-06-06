#include <iostream>

#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char lista[10][20];
    char a[20];
    int pos = 0;

    for(int i=0;i<10;i++){
        for(int j=0;j<20;j++) {
            a[j] = ' ';
            lista[i][j] = ' ';
        }
    }

    for(int i=0;i<10;i++){
        cin >> lista[i];
    }

    cin >> a;
    if(cerca(lista,pos,a)){
        cout << "trovato in posizione "<< pos;
    }else{
        cout << "non trovato";
    }

    return 0;
}
