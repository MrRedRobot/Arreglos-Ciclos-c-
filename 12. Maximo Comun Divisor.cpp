#include <iostream> 
#include <stdio.h> 


using namespace std; 

int Leer(){
	int num;
	
	    cout<<"\nDigite un numero: ";
		cin>>num;
		
	return num;
	
}

int MCD (int a, int b){
	int mcd;
	while (a!=b){
		if (a>b)
			a=a-b;
		else
			b=b-a;
	}
	mcd=a;
	return mcd;
}
    
   int main(){ 

   int a,b,mcd,op;
	
   do {
   		cout<<"_______________________________________________";
   		
		a = Leer();
		b = Leer();
		mcd=MCD(a,b);
		
		printf ("\nMCD entre %i y %i es: %i \n",a,b,mcd);
		
		cout<<"\nDesea calcular un nuevo MCD? Si(1),No(0) \n";
		cin>>op;
		
   } while (op != 0);
   

   
    return 0;  
}





