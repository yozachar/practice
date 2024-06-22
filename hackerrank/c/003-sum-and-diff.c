#include <stdio.h>

int main()
{
    // %d (integer), %c (character), %s (string), %f (float)s
    int x, y;
    scanf(" %d %d", &x, &y);
    printf("%d %d\n", x+y, x-y);
    float a, b;
    scanf(" %f %f", &a, &b);
    printf("%.1f %.1f", a+b, a-b);
    return 0;
}

