
/*
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
 */



#include <iostream>
#include "lib.h"

using namespace std;

int main() {
    char nomi[5][15], cognomi[5][15];
    init(nomi);
    init(cognomi);
    inserimento(nomi, cognomi);
    char nome[15], cognome[15];
    inserimento(nome, 15);
    inserimento(cognome, 15);
    int id = ricerca(nomi, cognomi, nome, cognome);
    if (id != -1) {
        cout << "trovato in posizione " << id << endl;
    }else{
        cout << "non trovato" <<endl;
    }
    return 0;
}
