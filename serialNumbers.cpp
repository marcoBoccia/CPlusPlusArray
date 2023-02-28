/*
Crea due array di due dimensioni diverse, riempili con numeri consecutivi.
Crea e poi stampa a schermo i due array concatenati
Array1 [0,1,2,3,4] Array2 [0,1,2]
ArrayRisultato [0,1,2,3,4,0,1,2]
*/
#include <iostream>
#include <string>
#include <array>
using namespace std;

int main() {
    // Creo e popolo l'Array1
    int array1[5];
    for (int i = 0; i < 5; i++) {
        array1[i] = i;
    }
    
    // Creo e popolo l'Array2
    int array2[3];
    for (int i = 0; i < 3; i++) {
        array2[i] = i;
    }
    
    // Concatenazione gli array in un unico array risultato
    int arrayRisultato[8];
    for (int i = 0; i < 5; i++) {
        arrayRisultato[i] = array1[i];
    }
    for (int i = 0; i < 3; i++) {
        arrayRisultato[5 + i] = array2[i];
    }
    // Mi stampo l'array risultato    
    for (int i = 0; i < 8; i++) {
        cout << arrayRisultato[i] << " ";
    }
    cout << endl;
    
    return 0;
}

