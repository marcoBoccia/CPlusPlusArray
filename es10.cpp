/*
Scrivere una funzione findLargestSumSubarray che, dato un array di numeri interi, restituisce la somma massima di un sottovettore consecutivo.
*/

/*
! ALGORITMO DI KADANE
!L'idea alla base dell'algoritmo è trovare la somma massima della sottomatrice il cui ultimo indice è la posizione in cui ci troviamo. Ci sono due possibilità: che la somma massima fino all'indice in cui ci troviamo sia l'elemento contenuto nell'indice in cui ci troviamo, oppure che la somma massima fino all'indice in cui ci troviamo sia l'elemento contenuto nell'indice dove troviamo più la somma massima della sottomatrice il cui ultimo indice è l'indice precedente. Assumiamo che la massima somma iniziale sarà sempre il valore del primo elemento dell'array.
*/

#include <iostream>
#include <string>
#include <array>
using namespace std;

int findLargestSumSubarrayWithKadane(int arr[], int len) {
    int maxSum = arr[0];
    int currentSum = arr[0];
    for (int i = 1; i < len; i++) {
        currentSum = max(arr[i], currentSum + arr[i]);
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }
    return maxSum;
}
int main() {
    int arr[] = { -2, -3, 4, -1, -2, 1, 5, -3 };
    int len = sizeof(arr) / sizeof(arr[0]);
    int maxSum = findLargestSumSubarrayWithKadane(arr, len);
    cout << "La somma massima di un sottovettore consecutivo e': " << maxSum << endl;
    return 0;
}

