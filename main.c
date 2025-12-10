#include <stdio.h>
#include "mul.h"

int main() {
    int a = 5, b = 7;
    int result = multiply(a, b);
    printf("%d * %d = %d\n", a, b, result);
    return 0;
}
