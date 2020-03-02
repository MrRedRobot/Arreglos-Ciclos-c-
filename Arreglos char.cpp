#include "stdio.h"
#include "conio.h"

char b[4];
int i;

int main(){
	for(i=0;i<=3;i++){
	
		b[i]=' ';
	}

	for(i=0;i<=3;i++){
		printf("Digite el %d caracter: ",(i+1));
		scanf("%c",&b[i]);
		getchar();
	}
	for(i=0;i<=3;i++){
		
		printf("%c : ",b[i]);
		
	}
	getchar();
	
	return 1;
}
