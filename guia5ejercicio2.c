
Ejercicio2 guia 5
#include <unistd.h>
#include <fcntl.h>

int main()
{
  char *from = "./archivo1.txt";
  char *to = "./archivo1(copia).txt";
  char buf[4096];
  ssize_t nread;

  int fd_from = open(from, O_RDONLY);
  int fd_to = open(to, O_WRONLY | O_CREAT, 0666);

  /* If one of the file descriptors is not valid */
  if (fd_from < 0 || fd_to < 0)
  {
    return -1;
  }

  while (nread = read(fd_from, buf, sizeof buf), nread > 0)
  {
    write(fd_to, buf, nread);
  }

  close(fd_from);
  close(fd_to);
}
