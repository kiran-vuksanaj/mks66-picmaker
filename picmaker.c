#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define IMG_FILENAME "image.ppm"

void write_asciiheader(int fd);
void write_pixel(int fd,int r,int g,int b);

int main(){
  int fd;
  double r,g,b;
  int y,x;
  fd = open(IMG_FILENAME,O_CREAT|O_TRUNC|O_WRONLY,0644);
  write_asciiheader(fd);
  r = 0;
  for( y=0; y < 500; y++ ){
    b = y/500.0 * 255;
    for( x=0; x < 500; x++ ){
      g = x/500.0 * 255;
      write_pixel(fd,(int)r,(int)g,(int)b);
    }
    write(fd,"\n",1);
  }
  close(fd);
}
