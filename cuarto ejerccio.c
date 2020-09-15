#include <stdio.h>
#include <stdlib.h>

int main(){

int *pnumero;
int num1, num2;
char *pchar;
char letra1;
num1 = 2;
num2 = 5;
letra1 = 'a';
printf("num1 = %d \n", num1);
printf("num2= %d \n", num2);
printf("letra1: %c \n",letra1);
pnumero = &num1;
printf("pnumero=  %d \n", *pnumero);



}
