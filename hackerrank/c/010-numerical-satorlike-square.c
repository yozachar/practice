#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;
  scanf("%d", &n);
  int k = n, dex = -1, dey = -1, dem = 0;

  for (int idx = 0; idx < 2 * n - 1; idx++) {
    if (idx <= n - 1)
      dex++;
    for (int jdx = 0; jdx < 2 * n - 1; jdx++) {
      if (jdx <= n - 1)
        dey++;
      dem = (dex < dey) ? dex : dey;
      printf("%d ", k - dem);
      if (jdx >= n - 1)
        dey--;
    }
    if (idx >= n - 1)
      dex--;
    printf("\n");
  }

  return EXIT_SUCCESS;
}

/*
    1

    2 2 2
    2 1 2
    2 2 2

    3 3 3 3 3
    3 2 2 2 3
    3 2 1 2 3
    3 2 2 2 3
    3 3 3 3 3

    4 4 4 4 4 4 4
    4 3 3 3 3 3 4
    4 3 2 2 2 3 4
    4 3 2 1 2 3 4
    4 3 2 2 2 3 4
    4 3 3 3 3 3 4
    4 4 4 4 4 4 4

    5 5 5 5 5 5 5 5 5
    5 4 4 4 4 4 4 4 5
    5 4 3 3 3 3 3 4 5
    5 4 3 2 2 2 3 4 5
    5 4 3 2 1 2 3 4 5
    5 4 3 2 2 2 3 4 5
    5 4 3 3 3 3 3 4 5
    5 4 4 4 4 4 4 4 5
    5 5 5 5 5 5 5 5 5
*/
