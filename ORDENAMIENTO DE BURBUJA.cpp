#include <iostream>
using namespace std;
int main()
{
	int aux,j,i; //definimos las variables, donde aux nos ayudara en el ordenamiento. 

	int datos[10]={90,80,70,60,50,40,30,20,10}; //definimos el Array con datos ya definidos
	for(int i=0 ; i<10; i++)             //con un ciclo for recorreremos el arrays 
	{
		for(int j=0; j<10; j++)         //con un ciclo for hacemos el recorrido 
		{
			if(datos[j] > datos[j+1])    //hacemos una condicion donde si el primer dato que es la posicion 0, es mayor al dato de la posicion 1, entonces 
			{   
				aux = datos[j];          //que el dato que esta en el array de j se guarde en la variable aux
				datos[j] = datos[j+1];   //si el dato de la posicion 0 es igual a datos de la posicion 1, entonces  
				datos[j+1] = aux;        //datos se agrege una posicion arriba y se guarde su posicion en aux
			}
		}
	}
	cout<<"ESTON SON LOS DATOS ORDENADOS"<<endl;

    for(int i=0;i<10;i++) //cuando ya se haya terminado el arreglo de los datos, utilizamos un ciclo for para imprimir los datos guardados en el nuevo array 
	cout<<datos[i];
	return 0;
}
