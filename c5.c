// TEST-File: Integer Overflow

#include <stdio.h>

int main() {
  unsigned short int var = 65535;
  var++;
  printf("Wert =  %u\n", var);
  return 0;
}
