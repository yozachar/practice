#include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

void calculate_the_maximum(int n, int k) {
  int max_a = 0, max_o = 0, max_x = 0;
  for (int idx = 1; idx < n; idx++) {
    for (int jdx = idx + 1; jdx <= n; jdx++) {
      int ca = idx & jdx, co = idx | jdx, cx = idx ^ jdx;
      if ((ca < k) && (ca > max_a)) {
        max_a = ca;
      }
      if ((co < k) && (co > max_o)) {
        max_o = co;
      }
      if ((cx < k) && (cx > max_x)) {
        max_x = cx;
      }
    }
  }
  printf("%d\n%d\n%d", max_a, max_o, max_x);
}

int main() {
  int n, k;

  scanf("%d %d", &n, &k);
  calculate_the_maximum(n, k);

  return 0;
}
