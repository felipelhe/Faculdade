#include <iostream>
#include <cassert>
#include <stdio.h>
#include <algorithm>
#include <iomanip>

using namespace std;

struct aluno
{
	int matricula;
	int peso;
};

bool cmp(aluno a, aluno b)
	{
		return(a.peso < b.peso);
	}

int main()
{	
	float soma, media;
	int t, n;
	cin >> t >> n;
	
	aluno turma[t];
	for(int j=0; j<t; j++)
	{
		cin >> turma[j].matricula >> turma[j].peso;
		
	}
	
	sort(turma, turma+t, cmp);
	cout <<"depois do sort"<< endl;
	
	for(int i=0; i<n; i++)
	{
		soma+=turma[i].peso;
		//cout << "DEU" << endl;
	}
	media=soma/n;
	media=media/1000;
	cout << setprecision(2) << fixed << media<< endl;
}

