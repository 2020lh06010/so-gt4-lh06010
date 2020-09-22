#include <unistd.h>
#include <string.h>

int main()
{
  char *texto = "Sistemas Operativos 2020_";
  write(1, texto, strlen(texto));

  return 0;
}
