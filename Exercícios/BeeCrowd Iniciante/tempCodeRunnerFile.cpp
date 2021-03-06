#include <iostream>
#define N 3
using namespace std;

int main() {
    int numero [N], numerocopy[N];
    int aux, maior = 0;

    
    // receber os valores
    for (int i = 0; i < N; i++) {
        cin >> numero[i];
    }

    // armazenar uma copia da array original
    for (int i = 0; i < N; i++) {
        numerocopy[i] = numero[i];
    }

    // sort simples (Bubble Sort)
    for (int i = 0; i < N-1; i++) {
        for (int j = i+1; j < N; j++) {
            if (numero[i] > numero[j]) {
                aux = numero[i];
                numero[i] = numero[j];
                numero[j] = aux;
            }
        }
    }

    cout << endl;
    
    // imprimir os valores em sort
    for (int i = 0; i < N; i++) {
        cout << numero[i] << endl;
    }

    // imprimier os valores originais
    for (int i = 0; i < N; i++) {
        cout << numerocopy[i] << endl;
    }    

    return 0;
}