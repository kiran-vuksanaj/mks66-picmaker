#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

#define IMG_FILENAME "image.ppm"

int main(){
  int fd,r,i;
  fd = open(IMG_FILENAME,O_CREAT|O_TRUNC|O_WRONLY,0644);
  write_asciiheader(fd);
  
}
