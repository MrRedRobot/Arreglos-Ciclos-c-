#include <iostream> 
#include <stdio.h> 
#include <math.h>


using namespace std; 

int Leer(){
	int num;
	
	    cout<<"\nDigite el numero de tres cifras: ";
		cin>>num;
		
	return num;
	
}
 
void SepararNum(int num){
	
	int c,d,u;

   c=(num/100)*100;
   //printf ("Centenas: %i \n", c/100); 

	
   d= ((num-c)/10)*10; 
   //printf ("Decenas: %i \n", d/10); 
   
   u= (num - c) - d; 
   //printf ("Unidades: %i \n", u); 
   
   printf ("\nNumero Ingresado: %i    \n", num); 
   printf ("\nDigitos Invertidos: %i%i%i \n", u,d/10,c/100); 
   
   
}
   
   int main(){ 

	int num,op;
	
	do {
		num = Leer();
		SepararNum(num);
		cout<<"\nDesea ingresar un numero nuevo? Si(1),No(0) \n";
		cin>>op;
		
	} while (op != 0);
   
    return 0;  
}
