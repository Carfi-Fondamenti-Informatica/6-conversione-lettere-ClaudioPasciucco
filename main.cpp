#include <iostream>
#include "lib.h"
int main(){
  char c;
    cin>>c;
    if (Verifica(c) == 1){
        cout << char (Conversione(c)) << endl;

    } else {
        cout << "errore" << endl;
    }


    return 0;
}

