Ejercicio 1 guia5
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>


int main(int argc, char *argv[]){
//leyendo el  msj
int file;
ssize_t bytes;
char content[file];

file=open(argv[1],O_RDWR);
if(file>0){
bytes=read(file, content, sizeof(content)-1);
write(1, content, bytes);
write(1,"\n",1);
}

return 0;
}
