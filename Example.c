#include <stdio.h>
#include <string.h>

#define V 100
#define M 1000

int main(int argc, char *argv[]) {
  char out[V];
  char buf[M];
  char msg[] = "Welcome to the argument echoing program\n";
  int len = 0;
  buf[0] = '\0';
  printf(msg);
  while (argc) {
    sprintf(out, "argument %d is %s\n", argc-1, argv[argc-1]);
    argc--;
    strncat(buf,out,sizeof(buf)-len-1);
    len = strlen(buf);
  }
  printf("%s",buf);
  return 0;
}
