// TEST-File: Integer Overflow

#include <stdio.h>

int main() {
  unsigned int var = 255;
  var++;
  printf("Wert =  %u\n", var);
  return 0;
}
