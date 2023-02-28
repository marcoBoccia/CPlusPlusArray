/*
Scrivi una funzione che prenda in input un array di interi e la sua lunghezza e restituisca la somma di tutti gli elementi dell'array.
*/

#include <iostream>
#include <string>
#include <array>
using namespace std;

/* solution 1
int main(){
    int arr [5] = {0,1,2,3,4};
    int sum = 0;
    for (int i = 0; i <= sizeof(arr)/sizeof(arr[0]); i++)
    sum += arr[i];
    cout << sum << endl;
}
*/

// solution 2
int sum(int arr [], int len){
    int result = 0;
    for (int i = 0; i < len; i++){
    result += arr[i];
    }
    return result;
}

int main(){
    int arr[] = {0,1,2,3,4};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout <<"La somma degli elementi dell'array è: " << sum(arr,len)<< endl;
    return 0;
}