//Ordenamiento por Selección.
#include<iostream>
using namespace std;
int main()
{
	int i,j,aux,min;
	int datos[] = {3,2,1,5,4};          //definimos el array con datos aleatorios.
	
	for(i=0;i<5;i++)                    //definimos un ciclo con for donde "i" sera la posicion del array
	{
		min = i;        0               //"min" sera ahora la posicion de "i"
		aux = datos[i];    3           //el dato del arreglo correspondiente a la posicion "i" sera ahora "aux"
		
		for(j=i+1;j<5;j++)    1        //indicamos que "j" inicie en la posicion "1"
		{
			if(datos[j] < datos[min]) 2  3 //si el dato del arreglo en la posicion "j" es menor que el dato del arreglo de la posicion "min"
			{
				min = j;           0 ahora esta donde estaba en 1  //entonces "min" ahora es la posicion "J"
			}
		}
		
		datos[i] = datos[min];  2 que se escriba en 3 
		datos[min] = aux;       3 que se escriba en 2
	}
	
	cout<<"ESTON SON LOS DATOS ORDENADOS"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<datos[i]<<" ";
	}

	
	return 0;
}
