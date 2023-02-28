/*
Scrivi una funzione che prenda in input un array di interi e la sua lunghezza e restituisca l'elemento più grande dell'array.
*/

#include <iostream>
#include <string>
#include <array>
using namespace std;


int main(){
    int arr[5] = {0,1,2,10,4};
    int max = 0;
    for(int i = 0; i <sizeof(arr)/sizeof(arr[0]);i++){
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout<<"L elemento più grande dell'array è: "<<max<<endl;
}