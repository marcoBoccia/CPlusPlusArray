/*
Scrivi una funzione che prenda in input un array di interi e la sua lunghezza e restituisca l'elemento più grande dell'array.
*/

#include <iostream>
#include <string>
#include <array>
using namespace std;

/* solution 1
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
*/

// solution 2
int maxNumber(int arr[],int len){
    int max = 0;
    for(int i = 0; i < len;i++){
         if (arr[i] > max)
        {
            max = arr[i];
        } 
    }
    return max;
}

int main(){
    int arr[5] = {0,1,2,10,4};
    int len = sizeof(arr)/sizeof(arr[0]);
    
    cout<<"L elemento più grande dell'array è: "<<maxNumber(arr, len)<<endl;
}