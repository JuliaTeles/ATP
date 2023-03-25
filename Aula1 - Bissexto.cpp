/*
  --> PSEUDO-C�DIGO <--

    algoritmo
        declare ano num�rico
        escreva "Informe o ano: "
        leia ano
        se ano%4 = 0
            se ano%100 = 0
                se ano%400 = 0
                ent�o escreva "O ano � bissexto"
            ent�o escreva "O ano n�o � bissexto"
        ent�o escreva "O ano � bissexto"
        sen�o escreva "O ano n�o � bissexto"
    fim_algoritmo

    --> Observa��es <--
    - H� diversas formas de fazer tal exerc�cio como a maioria dos
    problemas de programa��o, assim busquei fazer de uma forma mais clara,
    sem me preocupar muito com tempo de processamento e afins.
    - Vale ressaltar que o Switch tamb�m pode ser usado ao inv�s da corrente
    de if's.

*/

#include <iostream>
using namespace std;

int main(){

    int ano;
    cout << "Informe o ano: \n" ;
    cin >> ano;

    if (ano%4 == 0){
        if(ano%100 == 0){
            if(ano%400 == 0){
                cout << "O ano " << ano << " e bissexto.\n";
            }
            else{
                cout << "O ano " << ano << " nao e bissexto.\n";
            }
        }else{
            cout << "O ano " << ano << " e bissexto.\n";
        }

    }else{
        cout << "O ano " << ano << " nao e bissexto.\n";
    }


}
