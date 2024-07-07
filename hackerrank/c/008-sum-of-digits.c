#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;
  scanf("%d", &n);
  int sum = 0, residue = n;
  while (residue > 0) {
    sum += residue % 10;
    residue /= 10;
  }
  printf("%d", sum);
  return EXIT_SUCCESS;
}
