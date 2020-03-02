#include <iostream> 
#include <stdio.h> 


using namespace std; 

int Leer(){
	int num;
	
	    cout<<"\nDigite un numero: ";
		cin>>num;
		
	return num;
	
}

int Multiplicacion (int a, int b){
	
	int suma=0;
	
	for(int i=1;i<=b;i++){ 
		suma=suma+a; 
	} 
	
	return suma;
}
    
   int main(){ 

   int a,b,rta,op;
	
   do {
   		cout<<"_______________________________________________";
   		
		a = Leer();
		b = Leer();
		rta=Multiplicacion(a,b);
		
		printf ("\n %i * %i = %i \n",a,b,rta);
		
		cout<<"\nDesea realizar una nueva multiplicacion? Si(1),No(0) \n";
		cin>>op;
		
   } while (op != 0);
   

   
    return 0;  
}

