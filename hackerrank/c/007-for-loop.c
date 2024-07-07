#include <stdio.h>
#include <stdlib.h>

char* repr(int var) {
  switch (var) {
  case 1:
    return "one";
  case 2:
    return "two";
  case 3:
    return "three";
  case 4:
    return "four";
  case 5:
    return "five";
  case 6:
    return "six";
  case 7:
    return "seven";
  case 8:
    return "eight";
  case 9:
    return "nine";
    break;
  }
  if (var < 1) {
    return "";
  }
  if (var % 2 == 0) {
    return "even";
  }
  return "odd";
}

int main(void) {
  int a, b;
  scanf("%d\n%d", &a, &b);
  for (int idx = a; idx <= b; idx++) {
    printf("%s\n", repr(idx));
  }
  return EXIT_SUCCESS;
}
