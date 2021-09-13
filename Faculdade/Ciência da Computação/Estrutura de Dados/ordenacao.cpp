#include <iostream>

using namespace std;

template<typename T>
void bubblesort(T vet[], int n)
{
	for(int c=0; c<n; c++)
		for(int i=0; i<n-1; i++)
		{
			if(vet[i]>vet[i+1])
			{
				swap(vet[i], vet[i+1]);
			}
		}
}


template<typename T>
void selectionsort(T vet[], int n) 
{
	T k;
	for(int i=0; i<n; i++)
	{	
		for(int j=0; j<n-1; j++)
		{
			k=j;
			if (vet[k]<vet[j+1])
			{
				vet[k]=vet[j];
			}
		}
		n--;
	}
}










	
}













