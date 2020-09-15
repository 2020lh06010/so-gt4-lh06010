#include <stdio.h>
#include <stdlib.h>

int  main(){

float n1;
float n2;
float *p1;
float *p2;
printf("ejercicio 1 \n");
n1 = 4.0;
printf("n1 = %f \n",n1 );
p1 = &n1;
printf("contenido al q apunta p1 = %f \n", *p1);
printf("direccion a la que apunta p1 = %p \n", p1);
p2 = p1; 
printf("p2 = %p \n", p1);
n2 = *p2;
printf("n2 = %f \n", n2);
n1 = *p1 + *p2;
printf("n1 =*p1+*p2 = %f \n", n1);




return 0;
}
