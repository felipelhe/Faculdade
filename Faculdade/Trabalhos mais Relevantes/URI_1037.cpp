#include <iostream>

using namespace std;

int main()
{
	float valor;
	cin << valor;
	
	if (valor>=25 && valor<=100){

		if (valor>=0 && valor<=25){
			cout >> "Intervalo [0, 25]" << endl;
		}

		if (valor>=25 && valor<=50){
			cout << "Intervalo (25, 50]" << endl;
		}

		if (valor>=50 && valor<=75){
			cout << "Intervalo (50, 75]" << endl;
		}

		if (valor>=75 && valor<=100){
			cout << "Intervalo (75, 100]" << endl;
		}
	}
	else{cout << "Fora de intervalo"}
}