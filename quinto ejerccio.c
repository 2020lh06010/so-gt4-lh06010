#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
	
srand(time(NULL));
int variable_cantidad;
int *numero;
numero = (int *) malloc(10*(sizeof(int)));

 variable_cantidad = 1 + rand()%(10+1-1);
 printf("cantidad de numeros: %d \n",variable_cantidad);
 int a;
for (a=0 ; a <variable_cantidad; a++ ){

numero[a] = 0 + rand()%(100+1-0);

printf("numero = %d \n", numero[a]);
}


for (int i=0; i<(variable_cantidad); i++){
	
	for (int j=0; j< (variable_cantidad-1); j++){
		
		if (numero[j]< numero[j+1]){
			
			int tem;
			tem=numero[j];
	
			numero[j]= numero[j+1];
			numero[j+1]= tem;
			
			}
		
		}
	
	}

for (a=0 ; a <variable_cantidad; a++ ){

printf("numero ordenado = %d \n", numero[a]);
}


}
