#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <string.h>

int main(int argc, char* argv[]) {

  int sourceFile, bytesR, bytesW;
  char buffer[1024];
  int i;
  for(i = 1; i < argc; i++) {

    sourceFile = open(argv[i], O_RDONLY);
    if(sourceFile == -1) {
      perror(argv[i]);
      continue;
    }

    while((bytesR = read(sourceFile, buffer, 1024)) > 0) {
      bytesW = write(1, buffer, bytesR);
    }

    if(bytesR == -1) {
      perror("Reading error");
      return -1;
    }

    close(sourceFile);
  }

  return 0;
}
