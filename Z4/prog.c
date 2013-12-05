#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char *argv[])
{
  int size;
  if(argc == 1 || strcmp("-i", argv[1])==0) {
    printf("How much mem?\n");
    char s[64];
    scanf("%10s", &s);
    size = atoi(s);
  } else {
    size = atoi(argv[1]);
  }
  char *a[10];
  int i=0;
  for (i = 0; i < 10; i++) {
    printf("Alloc nr %d..", i);
    a[i] = malloc(size);
    if (a[i]==NULL) {
      printf("failed.\n");
    } else {
      printf("ok.\n");
    }
  }
  for (i = 0; i < 10; i++) {
    free(a[i]);
  }
  return 0;
}
