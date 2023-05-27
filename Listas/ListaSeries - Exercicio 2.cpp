/*
    --> ENUNCIADO <--
        2) Fa�a um programa em C++ para gerar progress�es aritm�ticas a
        partir de 3 dados fornecidos pelo usu�rio:
            a) termo inicial;
            b) raz�o;
            c) quantidade de termos.
        N�o � garantido que o usu�rio ir� informar um n�mero estritamente
        positivo para o item c.

    --> PSEUDO-C�DIGO <--

    algoritmo
        declare termo, razao, quantidade, i num�rico
        i = 0

        escreva "Escreva o termo inicial: "
        leia termo

        escreva "Escreva a raz�o: "
        leia razao

        escreva "Escreva a quantidade de termos: "
        leia quantidade

        se quantidade>0
        ent�o
            escreva termo
            enquanto i<(quantidade-1)
            in�cio
                termo = termo + razao
                escreva termo
                i = i + 1
            fim
        sen�o
            escreva "Quantidade de termos incorreta, informe um n�mero maior do que 0."
    fim_algoritmo

*/

#include <iostream>
#include <locale.h>
using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");
    int termo, razao, quantidade, i;
    i = 0;

    cout << "Escreva o termo inicial: ";
    cin >> termo;

    cout << "\nEscreva a raz�o: ";
    cin >> razao;

    cout << "\nEscreva a quantidade de termos: ";
    cin >> quantidade;

    if(quantidade>0){
        cout << " | " << termo << " | ";
        while(i<(quantidade-1)){
                    termo = termo + razao;
                    cout << termo << " | ";
                    i++;
        }
    }
    else{
        cout << "\nQuantidade de termos incorreta, informe um n�mero maior do que 0.";
    }

}
