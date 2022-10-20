//Ordenamiento por Inserción.
#include<iostream>
using namespace std;
int main(){
	int i,pos,aux;                                   //definimos las variables
	int numeros[] = {3,4,2,1,5};                      //definimos el array donde insertamos 5 numeros desordenados
		
	for(i=0;i<5;i++)                                  //definimos un ciclo con for donde i sera la posicion del array
	
	{
		pos = i;                                      //"pos" sera ahora la posicion de "i"
		aux = numeros[i];	                          //"aux" sera donde guardaremos el dato del array, de la posicion "i"
		while((pos>0) && (numeros[pos-1] > aux))      //con un ciclo while definimos condiciones, donde si "pos" es mayor que "0" && si la 
		                                              //posicion antes de "i" es mayor al auxiliar entonces que
		{
			numeros[pos] = numeros[pos-1];            //el dato guardado en el array correspondiente a la posicion de "pos" ahora sera una posicion antes
			pos--;                                    //la posicion se decrementa
		}
		numeros[pos] = aux;                          //el dato guardado en el array en la posicion "pos" es ahora "aux"
	}
	
	cout<<"ESTON SON LOS DATOS ORDENADOS"<<endl;
	for(i=0;i<5;i++)                                //con este ciclo recorremos el arreglo para poder imprimir los datos ya ordenados:
	{
		cout<<numeros[i]<<" ";                     //imprimimos
	}
	return 0;
}
