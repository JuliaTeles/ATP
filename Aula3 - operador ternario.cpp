/*----------------------------------------------------------
	condicional-senten�a = n�o resulta num valor
	condicional-express�o = resulta num valor
-----------------------------------------------------------*/
#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	int a;
	
	if(3>2)
		a = 10;
	else
		a = 7;
		
	int b;
	b = 3 > 2 ? 10 : 7;
	/* ----------------------------------------------------
		Operador tern�rio: codi��o ? valor A : valor B
		Se codi��o = true -> valor A 
		Se codi��o = false -> valor B 
	----------------------------------------------------*/
	std::cout << b; 
	return 0;
}
