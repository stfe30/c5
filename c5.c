// TEST-File: Integer Overflow

#include <stdio.h>

int main() {
  int var = 2147483647;
  var++;
  printf("Wert =  %i\n", var);
  return 0;
}
