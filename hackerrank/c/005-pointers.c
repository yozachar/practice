#include <stdio.h>

void update(int *a, int *b) {
  int s = *a + *b;
  int d = (*a > *b) ? (*a - *b) : (*b - *a);
  *a = s;
  *b = d;
}

int main() {
  int a, b;
  int *pa = &a, *pb = &b;

  scanf("%d %d", &a, &b);
  update(pa, pb);
  printf("%d\n%d", a, b);

  return 0;
}
