/*
Scrivere un programma in C++ che prende in input una stringa e determina se essa è formata da caratteri univoci, ovvero non ci sono caratteri ripetuti nella stringa.
Ad esempio, la stringa "casa" non è formata da caratteri univoci poiché la lettera "a" compare due volte, mentre la stringa "cane" è formata da caratteri univoci.
*/

#include <iostream>
#include <string>
#include <array>
using namespace std;

bool isUnivoca(string parola) {
    for (int i = 0; i < parola.length(); i++) {
        for (int j = i + 1; j < parola.length(); j++) {
            if (parola[i] == parola[j]) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    string parola;
    cout << "Inserisci una parola: "<<endl;
    cin >> parola;
    if (isUnivoca(parola)) {
        cout << "La parola è univoca." << endl;
    } else {
        cout << "La parola non è univoca." << endl;
    }

    return 0;
}
