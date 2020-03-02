#include <iostream> 
#include <stdlib.h> 

using namespace std;

int i,j; 
int array[5][5]; 

int main() { 
	for(i=0;i<=4;i++){
		for(j=0;j<=4;j++){
			if (i==j) 
			array[i][j]=1; 
		}
	}

	for(i=0;i<=4;i++) { 
		for(j=0;j<=4;j++){
			cout << array[i][j]; 
		}
		cout << endl;
	} 
	system("pause"); 
} 


