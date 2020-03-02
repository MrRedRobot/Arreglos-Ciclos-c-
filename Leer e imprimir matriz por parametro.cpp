#include <stdio.h>
#include "conio.h"
#include <iostream>

using namespace std;

void Asignamatriz(int **&matriz, int fil, int col)
	{

		//Incremento en uno el valor de cada elemento de la matriz
		//Valores que ya tenía la matriz al ser recibida.
		for (int i=0; i<fil; i++)
			for(int j=0;j<col; j++)
				matriz[i][j]++;
	}


void Imprimematriz(int**matriz, int fil, int col)
	{
		//Imprime la matriz que se recibe como argumento.
		for (int i=0; i<fil; i++)
			{
				for(int j=0;j<col; j++)
					cout<<matriz[i][j]<<" ";
				cout <<endl;

			}
	}


int main ()
{
	//Matriz 4x4 
	int matriz[4][4];
	//Número de filas y columnas
	int col=4, fil=4;
	//Valor que asignaré a cada elemento de la matriz
	int valor=0;
	//Vector de punteros
	int *p[4];
	//Puntero a puntero
	int **q;

	//Lleno la matriz con valores
	for (int i=0; i<fil; i++)
		for(int j=0;j<col; j++)
			matriz[i][j]=valor++;

	//Cada elemento del vector "p" apunta a una fila de la matriz
	for (int i=0; i<4;i++)
		p[i]=matriz[i];

	//El puntero "q" apunta al vector "p"
	q=p;

	//Empleo la función que asigna valores.
	Asignamatriz(q,fil,col);

	//Función que imprime la matriz.
	Imprimematriz(q,fil, col);
}

