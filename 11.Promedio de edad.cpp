#include <iostream> 
#include <stdio.h> 


using namespace std; 

int Leer(){
	int num;
	
	    cout<<"\nDigite la edad: ";
		cin>>num;
		
	return num;
	
}
    
   int main(){ 

   int edad,cantidad=0,menores=0,total=0,op;
	
   do {
   		
		edad = Leer();
		cantidad++;
		total=total+edad;
		if(edad<18){			
			menores++;		
		}
		
		cout<<"\nDesea ingresar una nueva edad? Si(1),No(0) \n";
		cin>>op;
		
   } while (op != 0);
   
   printf ("\nCantidad de personas: %i \n",cantidad);
   printf ("\nPromedio de edad: %i \n", total/cantidad);
   printf ("\nMenores de edad: %i \n", menores);
   
    return 0;  
}
