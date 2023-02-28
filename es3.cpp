/*
Scrivi una funzione che prenda in input un array di interi e la sua lunghezza e restituisca la somma di tutti gli elementi dell'array.
*/

#include <iostream>
#include <string>
#include <array>
using namespace std;

int main(){
    int arr [5] = {0,1,2,3,4};
    int sum = 0;
    for (int i = 0; i <= sizeof(arr)/sizeof(arr[0]); i++)
    sum += arr[i];
    cout << sum << endl;
}