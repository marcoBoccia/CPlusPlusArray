/*
Scrivi una funzione che prenda in input un array di interi e la sua lunghezza e restituisca il numero di sequenze di interi crescenti all'interno dell'array. Ad esempio, se l'array di input è {1, 2, 3, 5, 4, 7}, la funzione dovrebbe restituire 2 perché ci sono due sequenze crescenti: {1, 2, 3} e {4, 7}.
*/

#include <iostream>
#include <string>
#include <array>
using namespace std;

int contaSequenze(int arr[],int len){
    int contatore = 0;
    for(int i=0; i < len; i++){
    if(i < len -1 && arr[i] < arr[i + 1]){
        while (i < len -1 && arr[i] < arr[i + 1])
        {
            i++;
        }
        contatore++;
    }
}
return contatore;
}

int main() {
    int arr[5]= {1,2,3,0,10};
    int len = sizeof(arr)/sizeof(arr[0]);
    int contatore = contaSequenze(arr, len);
    cout <<"Il numero di sequenze crescenti nell'array è: " << contatore << endl;
}