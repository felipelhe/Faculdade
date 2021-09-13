// Escrever um programa que lê os dados de 10 alunos 
// e exibe a matricula e o nome do aluno com maior nota

#include <iostream>

using namespace std;

struct aluno{
	int matricula;
	string nome;
	float nota;
};

const int N=10;

int main()
{
	aluno turma[N];
	int imaior;
	
	for(int i=0; i<N; i++){
		cout << "Matricula: "; cin >> turma[i].matricula;
		cin.ignore();
		cout << "Nome: "; getline(cin, turma[i].nome);
		cout << "Nota: "; cin >> turma[i].nota;
		cout << endl;
		if(i==0 || turma[i].nota>turma[imaior].nota) 
			imaior=i;
	}
	cout << "Aluno com maior nota:\n";
	cout << "Matricula: " << turma[imaior].matricula << endl;
	cout << "Nome: " << turma[imaior].nome << endl;
	cout << "Nota: " << turma[imaior].nota  << endl;
	cout << endl;	
}




