#include <stdio.h>
//#include <string.h>
//#include <math.h>
//#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int sum = 0, residue = n;
    while (residue > 0) {
        sum += residue % 10;
        residue /= 10;
    }
    printf("%d", sum);
    return 0;
}
