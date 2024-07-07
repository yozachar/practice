#include <stdio.h>
#include <stdlib.h>

int max_of_four(int a, int b, int c, int d) {
  int max = a;
  switch (1) {
  case 1:
    if (b > max)
      max = b;
    if (c > max)
      max = c;
    if (d > max)
      max = d;
    break;
  }
  return max;
}

int main(void) {
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  int ans = max_of_four(a, b, c, d);
  printf("%d", ans);

  return EXIT_SUCCESS;
}
