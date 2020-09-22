#include <fcntl.h>
#include <unistd.h>

int main()
{
  char buf[30];
  int i = 0;
  ssize_t nread;

  nread = read(0, buf, sizeof buf);
  while (i < 3)
  {
    write(1, buf, nread);
    i++;
  }
}
