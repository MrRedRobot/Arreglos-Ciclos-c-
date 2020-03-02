#include <iostream>
#include <fstream>
#define paises 12

using namespace std;

int main() {
   char cadena[128];
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
   // Crea un fichero de salida
   ofstream fs("nombre.txt"); 

   // Enviamos una cadena al fichero de salida:
	fs<<"...PAISES PARTICIPANTES..."<<endl;
    fs<<"---------------------------"<<endl;  

    for (int f=0; f<paises; f++) {
        for (int c=0; c<2; c++) {			
			fs<<Paises[f][c]<<" ";
        }
        fs<<endl;
   }
   fs<<"---------------------------";  

   // Cerrar el fichero, 
   // para luego poder abrirlo para lectura:
   fs.close();

   // Abre un fichero de entrada
   ifstream fe("nombre.txt"); 

   // Leeremos mediante getline, si lo hiciéramos 
   // mediante el operador << sólo leeríamos 
   // parte de la cadena:
   fe.getline(cadena, 128);

   cout << cadena << endl;

   return 0;
}


