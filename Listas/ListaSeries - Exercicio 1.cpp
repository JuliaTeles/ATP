/*
    --> ENUNCIADO <--
        1) Fa�a um programa em C++ para gerar 10 n�meros �mpares
        consecutivos ap�s um n�mero inteiro positivo fornecido pelo usu�rio.

    --> OBSERVA��ES <--
        - Nos casos de teste, o professor usa o n�mero 7 e consta que � v�lido.
        Por�m, no enunciado est� dizendo que o n�mero inserido h� de ser um n�mero
        par, portanto h� um if o qual garante que a conta s� seja realizado com tais
        n�meros. Se quiser que o programa permita n�meros �mpares � s� remover
        o if/else e o tratamento de primeiro n�mero.

    --> PSEUDO-C�DIGO <--

    algoritmo
        declare numero, i num�rico
            numero = 0
            i = 1
        escreva "Escreva um n�mero par e positivo: "
        leia numero

        se numero%2 = 0
        ent�o
            numero = numero + 1
            escreva numero
            enquanto i < 10
            in�cio
                numero = numero + 2
                escreva numero
                i = i + 1
            fim
        sen�o
            escreva "O n�mero informado n�o � par!"
    fim_algoritmo

*/

#include <iostream>
#include <locale.h>
using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");
    int numero, i;

    numero = 0;
    i = 1;

    cout << "Escreva um n�mero par e positivo: ";
    cin >> numero;

    if(numero%2 == 0){
            numero++;
            cout << "\n | " << numero << " | ";
            while(i<10){
                numero = numero + 2;
                cout << numero << " | ";
                i++;
            }
    }
    else{
        cout << "O n�mero digitado n�o � par! \n";
    }

}
