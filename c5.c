// TEST-File: Overflow

#include <stdio.h>

int main() {
  unsigned char var = 255;
  var++;
  printf("Wert =  %d\n", var);
  return 0;
}
