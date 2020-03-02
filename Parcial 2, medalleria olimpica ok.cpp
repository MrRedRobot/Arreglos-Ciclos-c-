//Andres David Orjuela,20152020923

#include <stdio.h>
#include <stdlib.h>
#include "conio.h"
#include <iostream>

#define paises 12
#define deportes 4

using namespace std;

int *t[paises];
int **q;

int totales[paises][3]={0};
string oro[deportes][1],plata[deportes][1],bronce[deportes][1];
string Paises[paises][2] = {
    "USA", "Estados Unidos", 
	"FRA", "Francia",
	"GER", "Alemania", 
	"ITA", "Italia",
	"CHN", "China", 
	"AUS", "Australia",
	"JPN", "Japon",
	"KOR", "Corea Del Sur", 
	"BRA", "Brasil",
	"ARG", "Argentina", 
	"MEX", "Mexico", 
	"COL", "Colombia" };
	
	
void ListaPaises(){
	cout<<"...PAISES PARTICIPANTES...\n";
    puts("---------------------------");  

    for (int f=0; f<paises; f++) {
        for (int c=0; c<2; c++) {			
			cout<<Paises[f][c]<<" ";
        }
        puts("");
    }
    puts("---------------------------");  
}

void IniciarJuegos(int dep, int col){

	for (int i=0; i<dep; i++){
		for(int j=0;j<col; j++){
			cout<<"Deporte "<<i+1<<": \n";
			cout<<"Oro: ";
			cin>>oro[i][j];
			cout<<"Plata: ";
			cin>>plata[i][j];
			cout<<"Bronce: ";
			cin>>bronce[i][j];		
			puts("---------------------------");   	
		}
	}

}

void ImprimirResultados(string o[][1],string p[][1],string b[][1], int f, int c){

	cout<<endl;
	cout<<"..RESULTADOS POR DEPORTE.."<<endl;
	cout<<"________________________"<<endl;
	cout<<"  | ORO | PLATA | BRONCE"<<endl;
	cout<<"________________________"<<endl;
	for (int i=0; i<c; i++){
		for(int j=0;j<f; j++){
			cout<<"D"<<j+1<<"| ";
			cout<<o[i][j]<<" |  "<<p[i][j]<<"  |  "<<b[i][j]<<"  | "<<endl;	
			cout<<"________________________"<<endl;
		}
		cout <<endl;
	}
}

void Resultados(string o[][1],string pl[][1],string b[][1],int f, int c){
	string pais;
	int moro=0;
	int mpla=0;
	int mbro=0;

	for(int p=0; p<paises;p++){
		
		pais=Paises[p][0];
		
		//cout<<"_______________________"<<endl;
		//cout<<"PAIS:"<<pais<<endl;

		for(int j=0;j<f; j++){
			//cout<<"D"<<j+1<<": "<<endl;
			//cout<<"ENCONTRADO O: "<<o[j][0]<<endl;			
			if(pais==o[j][0]){
				moro++;	
				totales[p][0]=totales[p][0]+moro;
				
				//cout<<" oro:"<<moro<<endl;	
			}
			//cout<<"ENCONTRADO P: "<<pl[j][0]<<endl;
			if(pais==pl[j][0]){
				mpla++;	
				totales[p][1]=totales[p][1]+mpla;

				//cout<<" plata:"<<mpla<<endl;	

			}
			//cout<<"ENCONTRADO B: "<<b[j][0]<<endl;
			if(pais==b[j][0]){
				mbro++;	
				totales[p][2]=totales[p][2]+mbro;
				
				//cout<<" bronce:"<<mbro<<endl;	
			}
			moro=0;	
			mpla=0;
			mbro=0;

		}
	}
}

void Totales(int**matriz, int fil, int col){
		cout<<endl;
		cout<<"...TABLA DE MEDALLERIA..."<<endl;
		cout<<"________________________"<<endl;
		cout<<"   | ORO | PLATA |BRONCE"<<endl;
		for (int i=0; i<fil; i++){

			cout<<"________________________"<<endl;
			cout<<Paises[i][0]<<"|";
			for(int j=0;j<col; j++)
				cout<<"   "<<matriz[i][j]<<"  ";
				
				cout <<endl;

		}
	}


int main (){
	
	for (int i=0; i<paises;i++){
		t[i]=totales[i];
	}
	q=t;

	ListaPaises();
	IniciarJuegos(deportes,1);
	ImprimirResultados(oro,plata,bronce,deportes,1);	
	Resultados(oro,plata,bronce,deportes,1);
	Totales(q,paises,3);
	//ImprimirResultados(oro,plata,bronce,deportes,1);
	
}
