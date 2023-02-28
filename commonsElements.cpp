/*
Scrivi una funzione che prenda in input due array di interi e le loro lunghezze e restituisca il numero di elementi comuni ai due array. Ad esempio, se gli array di input sono {1, 2, 3, 4} e {2, 4, 6, 8}, la funzione dovrebbe restituire 2 perché ci sono due elementi comuni: 2 e 4.
*/

#include <iostream>
#include <string>
#include <array>
using namespace std;

int contaElementiComuni(int arr1[], int len1, int arr2[], int len2){
    int contatore = 0;
    for(int i = 0; i < len1;i++){
        for(int j = 0; j < len2;j++){
            if(arr1[i] == arr2[j]){
                contatore++;
                break;
            }
        }
    }
    return contatore;
}

int main(){
    int arr1[] = {5,6,9,10,15};
    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {4,6,10,12,15};
    int len2 = sizeof(arr2) / sizeof(arr2[0]);
    int contatore = contaElementiComuni(arr1, len1, arr2,len2);
    cout<<"Numero elementi comuni: "<<contatore<<endl;
}