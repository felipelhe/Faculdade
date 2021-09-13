#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float salario, novo, reajuste;
	
	cin >> salario;

	if(salario<=400.00){
		reajuste=salario*0.15;           
		novo=salario+reajuste;
		cout << "Novo salario: " << fixed << setprecision(2) << novo << endl;
		cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
		cout << "Em percentual: 15 %" << endl;
		
	}
	if(800.00>=salario && salario >400.00){
		reajuste=salario*0.12;
		novo=salario+reajuste;
		cout << "Novo salario: " << fixed << setprecision(2) << novo << endl;
		cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
		cout << "Em percentual: 12 %" << endl;
			}
	if(1200.00>=salario && salario>800.00){
		reajuste=salario*0.10;
		novo=salario+reajuste;
		cout << "Novo salario: " << fixed << setprecision(2) << novo << endl;
		cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
		cout << "Em percentual: 10 %" << endl;
	}
	if(2000.00>=salario && salario>1200.00){
		reajuste=salario*0.07;
		novo=salario+reajuste;
		cout << "Novo salario: " << fixed << setprecision(2) <<  novo << endl;
		cout << "Reajuste ganho: " << fixed << setprecision(2) <<  reajuste << endl;
		cout << "Em percentual: 7 %" << endl;
	}
	if(salario>2000.00){
	reajuste=salario*0.04;
		novo=salario+reajuste;
		cout << "Novo salario: " << fixed << setprecision(2) <<  novo << endl;
		cout << "Reajuste ganho: " << fixed << setprecision(2) <<  reajuste << endl;
		cout << "Em percentual: 4 %" << endl;
	}
}


