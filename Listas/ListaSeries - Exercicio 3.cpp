/*
    --> ENUNCIADO <--
        3) Refa�a a quest�o 2 com a seguinte modifica��o no item c: valor limite.
        (N�o � garantido que o usu�rio ir� informar um valor limite coerente.)

    --> PSEUDO-C�DIGO <--

    algoritmo
        declare termo, razao, limite, i num�rico
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
    int termo, razao, limite;
    termo = 0;
    razao = 0;
    limite = 0;

    cout << "Escreva o termo inicial: ";
    cin >> termo;

    cout << "\nEscreva a raz�o: ";
    cin >> razao;

    cout << "\nEscreva o limite: ";
    cin >> limite;

    cout << " | " << termo << " | ";
    if(limite>0){
        while(limite>termo){
            termo = termo + razao;
            cout << termo << " | ";
        }
    }
    else{
        cout << "O limite informado n�o � coerente";
    }



}

