/*
Scrivi nel main un algoritmo che su un array, calcola e restituisce un nuovo array che contenga solo gli elementi dell'array di input che sono pari.
*/

#include <iostream>
#include <string>
#include <array>
using namespace std;

int main(){
    int arr[] = {0,1,2,3,4};
    int len = sizeof(arr)/sizeof(arr[0]);
    int evenArr[] = {}; //creo l'array che sarà il mio output 
    int v = 0; // inizializzo il valore per l'indice del mio array in output

    for(int i=0; i<len; i++){
        if (arr[i] %2 == 0)
        {
            evenArr[v] = arr[i]; // aggiungo l'elemento pari nell'array evenArr
            v++; // incremento il valore per l'indice del mio nuovo array
        }
    }
    for(int i=0; i<v; i++){ // ciclo fino a v che contiene il numero di elementi pari che ho trovato
    cout << evenArr[i] << endl;
    }
    return 0;
}