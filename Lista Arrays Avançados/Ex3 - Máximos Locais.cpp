#include <iostream>
#include <locale>
using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");
    int quantidade;
    int qtdmaximos = 0;

    cout << "Digite a quantidade de n�meros do array: \n";
    cin >> quantidade;
    int numeros[quantidade];
    int maximos[quantidade];

    for(int k=0; k<quantidade; k++){
        cout << "Digite o n�mero da posi��o " << k+1 << ":\n";
        cin >> numeros[k];
    }

    cout << "---------\n";
    for(int i=0; i<quantidade; i++){
        if(i=0){
            if(numeros[i]>numeros[i+1]){
                maximos[i] = numeros[i];
                qtdmaximos = i;
            }
        }else if(i = quantidade-1){
            if(numeros[i]>numeros[i-1]){
                maximos[i] = numeros[i];
                qtdmaximos = i;
            }
        }else if(numeros[i]>numeros[i-1] && numeros[i]>numeros[i+1]){
            maximos[i] = numeros[i];
            qtdmaximos = i;
        }else{
            cout << "N�o � m�x \n";
        }
    }

    cout << "Qtd maximos: \n" << qtdmaximos << endl;
    cout << "M�ximos Locais: \n";
    for(int j=0; j<qtdmaximos; j++){
        cout << maximos[j] << " | ";
    }
}
