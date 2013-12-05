#include <stdio.h>

int big_big_array[10 * 1024 * 1024];
char *a_string = "Hello, World!";
int a_var_with_value = 0x100;
const int read_only_var = 0x77;
int main(void)
{
  big_big_array[0] = 100;
  printf("%s\n", a_string);
  printf("%d\n", read_only_var);
  a_var_with_value += 20;
}
