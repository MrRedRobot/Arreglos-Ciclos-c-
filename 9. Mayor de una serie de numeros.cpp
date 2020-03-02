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

   int num,max=0,op;
	
   do {
   		
		num = Leer();
		if(num>max){
			
			max=num;
			
		}
		
		cout<<"\nDesea ingresar un numero nuevo? Si(1),No(0) \n";
		cin>>op;
		
   } while (op != 0);
   printf ("\nNumero Mayor: %i \n", max);
   
    return 0;  
}
