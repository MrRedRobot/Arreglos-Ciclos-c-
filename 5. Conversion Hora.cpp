#include <iostream> 
#include <stdio.h> 
#include <math.h>


using namespace std; 

int Leer(string t){
	int num;
	
		//printf("\n Digite la cantidad de  %s : ",t);
	    cout<<"\n Digite la cantidad de "<<t<<": ";
		cin>>num;
		
	return num;
	
}


void ConvertirHora(int h, int m){
	
	int d;
	string f;
	
	if(m>60){
		
		d=trunc(m/60);
		h=h+d;
		m=m%60;
		
	}if(m<60){
		
		d=h-12;
		
		if(h<12){	
			h=h;
			f="AM";
			
		}if(h>12){
			h=d;
			f="PM";
				
		}
		
	}
		printf("\n Hora: %i : %i .",h,m);
		cout<<f;
	
}

int main(){ 

	int h,m,op;
	
	do {
		h= Leer("Horas");
		m= Leer("Minutos");
		ConvertirHora(h,m);
		cout<<"\nDesea convertir de nuevo? Si(1),No(0) \n";
		cin>>op;
		
	} while (op != 0);
   
    return 0;  
}
