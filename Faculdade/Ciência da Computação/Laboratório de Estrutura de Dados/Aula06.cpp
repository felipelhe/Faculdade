#include <iostream>

using namespace std;

int main()
{
	int n, soma=0;
	do{
		cout <<"INforme um valor positivo (0 para sair): \n";
		cin >> n;
		if(n==0) {break;}       		//break cai fora do laço e continua o programa;
		if(n<0){
			cout << "Inválido\n;";
			continue                 /*NÃO EXECUTE OS COMANDOS DENTRO DO LAÇO 
			                         (no caso pula "soma+=n" pra proxima "fase" do laço)*/
		soma += n; 					//Soma =Soma+n;
	}while (true);
	cout << "soma: " << soma <<endl;
}
