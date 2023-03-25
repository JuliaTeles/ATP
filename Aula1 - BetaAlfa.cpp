/*
  --> PSEUDO-C�DIGO <--

    algoritmo
        declare valor1, valor2 num�rico
        escreva "Informe o primeiro valor: "
        leia valor1
        escreva "Informe o segundo valor: "
        leia valor2

        se (valor1 > 10)^(valor2 < 15)
        ent�o escreva "Alfa"
        se (valor1 > 10)v(valor2 < 15)
        ent�o escreva "Beta"
    fim_algoritmo

    --> Observa��es <--
    ^ indica "e", sendo simbolizado no C++ como &&
    v indica "ou", sendo simbolizado no C++ como ||
*/


#include <iostream>
using namespace std;

int main(){

    int valor1, valor2;
    cout << "Digite o primeiro valor: \n";
    cin >> valor1;
    cout << "Digite o segundo valor: \n";
    cin >> valor2;

    if(valor1>=10 && valor2 <=15){
        cout << "Alfa";
    }else if(valor1>=10 || valor2>= 15){
        cout << "Beta";
    }else{
        cout << "O valor n�o corresponde a nenhuma categoria.";
    }
}
