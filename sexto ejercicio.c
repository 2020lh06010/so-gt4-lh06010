#include <stdio.h>
#include <stdlib.h>

int cantidad_n;
float *p;


	
	void media_aritmetica(int total_datos){
		float media=0;
		int n=total_datos;
		
		
	for(int i=0;i<cantidad_n; i++){
	
	media= (media + p[i]);
	

}	
media=media/n;
printf("Media aritmetica= %f \n", media);
		
		}
	
	void mayor_menor(){
		
	for (int i=0; i<(cantidad_n); i++){
	
		for (int j=0; j< (cantidad_n-1); j++){
		
		if (p[j]< p[j+1]){
			
			int tem;
			tem=p[j];
	
			p[j]= p[j+1];
			p[j+1]= tem;
			
			}
		
		}
	
	}
		printf("el mayor es=%f \n",p[0]);
		printf("El menor es= %f \n",p[cantidad_n -1] );
		
		}






int main (){

printf("Ingrese la cantidad de numeros q utilizara\n");
scanf("%d", &cantidad_n);

p= (float *) malloc(cantidad_n*(sizeof(float)));

for(int i=0;i<cantidad_n; i++){
	printf ("ingrese el dato %d: \n", i+1);
	scanf("%f",&p[i]);
	
	
	}
	
	media_aritmetica(cantidad_n);
	mayor_menor();
	
	
}

