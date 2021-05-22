#include <stdio.h>
#include <stddef.h>

int main() {
  short int short_int = 0;
  int i = 0;
  long int long_int = 0;
  wchar_t zhong = L'中';
  printf("char %d \n", zhong);
  printf("short int: %lu\n", sizeof(short int));
  printf("int: %lu\n", sizeof(int));
  printf("long int: %lu\n", sizeof(long int));
  return 0;
}