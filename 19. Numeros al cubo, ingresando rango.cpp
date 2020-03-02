#include <iostream> 
#include <stdio.h> 


using namespace std; 

int Leer(){
	int num;
	
	    cout<<"\nDigite un numero: ";
		cin>>num;
		
	return num;
	
}

int ElevarCubo(int n){
	
	int cubo=0;
		
	cubo=n*n*n;
	
	return cubo;
	
}

	

int main(){ 

   int n,a,b,cubo;
   
   a=Leer();
   b=Leer();
   
   n=a;
   
   while(n<=b){
   	
   	   if(n%2==0){
   	
   		  cubo=ElevarCubo(n);
   		  printf ("\n %i ^3 =%i \n",n,cubo);
   		
   		}else{
   			
   		  printf ("\n %i impar \n",n);	
		}
		n++;
		   
   	
   }
   
      
    return 0;  
}
