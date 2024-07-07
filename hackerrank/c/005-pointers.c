#include <stdio.h>
#include <stdlib.h>

void update(int* a, int* b) {
  int s = *a + *b;
  int d = (*a > *b) ? (*a - *b) : (*b - *a);
  *a = s;
  *b = d;
}

int main(void) {
  int a, b;
  int *pa = &a, *pb = &b;

  scanf("%d %d", &a, &b);
  update(pa, pb);
  printf("%d\n%d", a, b);

  return EXIT_SUCCESS;
}
