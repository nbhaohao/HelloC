#include <stdarg.h>
#include <stdio.h>
void Printlnf(const char *format, ...) {
  va_list args;
  va_start(args, format);
  vprintf(format, args);
  printf("\n");
  va_end(args);
}

int main() {
  Printlnf("hello world");
  Printlnf("hello world");
}