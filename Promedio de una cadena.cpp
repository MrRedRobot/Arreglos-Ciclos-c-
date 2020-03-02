#include "stdio.h"
#include "conio.h""

int b[4];
int i,suma;
float prom;

int main(){
	for(i=0;i<=3;i++){
	
		b[i]=0;
	}

	for(i=0;i<=3;i++){
		printf("Digite el %d valor: ",(i+1));
		scanf("%d",&b[i]);
		suma=suma+b[i];
	}
	prom=suma/4;
	printf("El promedio es %f", prom);
	
	return 0;
}
