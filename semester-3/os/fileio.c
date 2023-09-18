#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  printf("Opening source file\n");
  int src_file = open("source.txt", O_RDONLY);
  if (src_file == -1) {
    printf("Error opening file\n");
    return -1;
  }
  printf("File opened successfully\n");
  int dest_file = open("dest.txt", O_WRONLY | O_CREAT, 0666);
  char buffer[4096];
  size_t n;
  while ((n = read(src_file, buffer, sizeof(buffer))) > 0) {
    write(dest_file, buffer, n);
  }
  printf("Contents copied successfully\n");
  close(src_file);
  close(dest_file);
  return 0;
}
