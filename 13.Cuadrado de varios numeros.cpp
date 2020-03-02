#include <iostream> 
#include <stdio.h> 


using namespace std; 

int Leer(){
	int num;
	
	    cout<<"\nDigite un numero: ";
		cin>>num;
		
	return num;
	
}
    
   int main(){ 

   int num,cuadrado;
	
   do {
   		
		num = Leer();
		cuadrado = num*num;
		printf ("\n %i ^2: %i \n",num,cuadrado);

		
   } while (num != 0);
      
    return 0;  
}
