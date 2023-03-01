/*
Scrivi nel main un algoritmo che su un array, calcola e restituisce un nuovo array che contenga solo gli elementi dell'array di input che sono pari.
*/

#include <iostream>
#include <string>
#include <array>
using namespace std;

int main()
{
    int arr[] = {0, 1, 2, 3, 4};
    int len = sizeof(arr) / sizeof(arr[0]);
    // ! punto 1 scorro tutto l'array
    for (int i = 0; i < len; i++)
    {
        // ! punto 2 conto i pari
        if (arr[i] % 2 == 0)
        {
            int evenArr[] = {};
            // ! punto 3 creo il risultato della dimensione giusta
            evenArr[0] = arr[i];
        }
    }
    int evenArr[3]; // creo l'array che sarà il mio output
    int v = 0;      // inizializzo il valore per l'indice del mio array in output
    // ! punto 4 scorro tutto l array
    for (int i = 0; i < len; i++)
    {
        if (arr[i] % 2 == 0)
        {
            // ! punto 5 quando trovo il pari lo metto nella posizione giusta
            evenArr[v] = arr[i]; // aggiungo l'elemento pari nell'array evenArr
            v++;                 // incremento il valore per l'indice del mio nuovo array
        }
    }
    for (int i = 0; i < v; i++)
    { // ciclo fino a v che contiene il numero di elementi pari che ho trovato
        cout << evenArr[i] << endl;
    }
    int lunghezza = sizeof(evenArr) / sizeof(evenArr[0]);
    cout << "la lunghezza del mio nuovo array e : " << lunghezza << endl;
    return 0;
}