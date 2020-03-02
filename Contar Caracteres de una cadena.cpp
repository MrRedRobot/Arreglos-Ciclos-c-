#include "stdio.h"
#include "conio.h"

char c1[10],c2[10],c3[10],c4[20];
int conta=0;


int main(){
	
	printf("Digite la primera cadena: ");
	gets(c1);
	printf("Digite la segunda: ");
	gets(c2);
	
	conta=0;
	
	for(int i=0;i<10;i++){
	
		if(c1[i]=='a'){
			
			conta++;
			
		}
		
	}
	printf("cantidad de caracteres A: %d ",(conta));
	
	
	
	
	return 0;
}
