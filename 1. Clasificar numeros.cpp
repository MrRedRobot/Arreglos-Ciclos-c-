#include <iostream> 
#include <stdio.h> 


using namespace std; 
 
int Primo(int n){
	int i,a=0;
	
	for(i=1;i<(n+1);i++){  
         if(n%i==0){  
             a++;  
            }  
         }  
         if(a!=2){  
            cout<<"\n El numero potencia de 2";
			  return 0; 			   
            }else{  
              cout<<"\n El numero es primo";
			  return 1;            		   
         }  		
} 

int Leer(){
	int num;
	
		cout<<"\n Digite un entero: ";
		cin>>num;
		
	return num;
	
}

void VerificarCondicion(int n){
	
	
	if(n==0){
		
		cout<<"\n Cero";
		
	}if(n==1){
		
		cout<<"\n Unidad";
		
	}if(n>30 || n<0){
		
		cout<<"\n El numero es superior a 30 o inferior a 0";	
		
	}if(n<30){
		
		Primo(n);
		
	}
	
}

int main(){ 

	int n,op;
	
	do {
		n= Leer();
		VerificarCondicion(n);
		cout<<"\nDesea agregar un nuevo entero? Si(1),No(0) \n";
		cin>>op;
		
	} while (op != 0);
   
    return 0;  
}
