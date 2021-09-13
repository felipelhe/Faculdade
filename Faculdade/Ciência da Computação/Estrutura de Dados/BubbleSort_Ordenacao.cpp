/*
Codificar, dentro da biblioteca ordenacao.cpp, o template de fun��o:

template<typename T>
void bubblesort(T vet[], int n) {
}

Ele recebe um vetor qualquer de um tipo gen�rico (T) e o seu tamanho (n).
A fun��o deve ordenar (classificar) o vetor em ordem crescente, usando o m�todo da bolha (Bubble Sort).
Esta fun��o n�o retorna valor.

Validar sua implementa��o com o programa de teste abaixo.
*/

#include <iostream>
#include <cassert>
#include "ordenacao.cpp"

using namespace std;

int main()
{
    int va[5] {20, 10, 3, 88, 14};
    bubblesort(va, 5);
    assert(va[0]==3 && va[1]==10 && va[2]==14 && va[3]==20 && va[4]==88);

    int vb[2] {-99, -1};
    bubblesort(vb, 2);
    assert(vb[0]==-99 && vb[1]==-1);

    int vc[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    bubblesort(vc, 10);
    assert(vc[0]==1 && vc[1]==2 && vc[2]==3 && vc[3]==4 && vc[4]==5 && vc[5]==6 && vc[6]==7 && vc[7]==8 && vc[8]==9 && vc[9]==10);

    int vd[10] {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    bubblesort(vd, 10);
    assert(vd[0]==1 && vd[1]==2 && vd[2]==3 && vd[3]==4 && vd[4]==5 && vd[5]==6 && vd[6]==7 && vd[7]==8 && vd[8]==9 && vd[9]==10);

    int ve[1] {18};
    bubblesort(ve, 1);
    assert(ve[0]==18);

    double vf[5] {4.8, 4.9, 0.5, 4.5, 4.3};
    bubblesort(vf, 5);
    assert(vf[0]==0.5 && vf[1]==4.3 && vf[2]==4.5 && vf[3]==4.8 && vf[4]==4.9);

    cout << "\nOK!\n";
    return 0;
}


