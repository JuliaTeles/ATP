/*
  --> PSEUDO-C�DIGO <--

    algoritmo
        declare numero num�rico
        escreva "Informe o n�mero: "
        leia numero

        se numero%2 = 0
        ent�o escreva "Par"
        sen�o escreva "�mpar"

    fim_algoritmo

*/

#include <iostream>
using namespace std;

int main(){

    int numero;
    cout << "Informe um numero: " ;
    cin >> numero;

    if (numero%2 == 0){
        cout << "\nO numero " << numero << " e par. \n";
        cout << "================== \n";
    }else{
        cout << "O numero " << numero << " e impar. \n";
        cout << "================== \n";
    }


}

