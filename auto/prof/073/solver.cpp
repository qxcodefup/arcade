#include <iostream>

using namespace std;

int* ordenar(int v[] , int tam ){
	int i,j,aux;
	for (i = 0; i < tam; i++)
	{
		for (j= i; j < tam; j++)
		{
			if(v[j] < v[i]){
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}
    }
    return v;
}

int main(){
int a=0;
	int qtd;
	cin >> qtd;
	int v[qtd];
	for (int i=0; i < qtd; i++)	{
		cin >> v[i];
	}
	ordenar(v,qtd);

    for(int j=0; j < qtd ; j++){
        a = v[j];
        cout << a;
        if(j < qtd - 1)
            cout  << " ";
    }
    cout << endl;
}
