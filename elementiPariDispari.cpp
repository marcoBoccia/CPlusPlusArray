/*
Scrivi un programma che, dato un array di interi, calcoli la somma degli elementi pari e degli elementi dispari in due cicli separati. Il programma deve poi stampare a schermo le somme ottenute.
Esempio:
Input: [3, 5, 2, 8, 9, 4]
Output: Somma degli elementi pari: 14 Somma degli elementi dispari: 17
*/

#include <iostream>
#include <string>
#include <array>
using namespace std;
/*
int main() {
    int size;  // dimensione dell'array
    cout << "Inserisci la dimensione dell'array: "<<endl;
    cin >> size;

    int numeri[size];  // array di interi
    int sommaPari = 0;
    int sommaDispari = 0;
    // inserisco gli elementi dell'array
    cout << "Inserisci " << size << " numeri interi:" <<endl;
    for (int i = 0; i < size; i++) {
        cin >> numeri[i];
    }

    // calcolo la somma degli elementi pari
    for (int i = 0; i < size; i++) {
        if (numeri[i] % 2 == 0) {
            sommaPari += numeri[i];
        }
    }

    // calcolo la somma degli elementi dispari
    for (int i = 0; i < size; i++) {
        if (numeri[i] % 2 != 0) {
            sommaDispari += numeri[i];
        }
    }

    // stampo le somme ottenute
    cout << "Somma degli elementi pari: " << sommaPari << endl;
    cout << "Somma degli elementi dispari: " << sommaDispari << endl;

    return 0;
}
*/
void sommaPariDispari(int arr[], int size) {
    int sommaPari = 0;
    int sommaDispari = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            sommaPari += arr[i];
        } else {
            sommaDispari += arr[i];
        }
    }

    cout << "Somma degli elementi pari: " << sommaPari << endl;
    cout << "Somma degli elementi dispari: " << sommaDispari << endl;
}
int main(){
    int size;
    cout << "Inserisci la dimensione dell'array: ";
    cin >> size;

    int arr[size];
    cout << "Inserisci gli elementi dell'array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    sommaPariDispari(arr, size);


    return 0;

}

