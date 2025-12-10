#include <stdio.h>
#include "mul.h"

int main() {
    int a = 4, b = 6;
    int result = multiply(a, b);

    if(result == 24) {
        printf("Test Passed! 4 * 6 = 24\n");
        return 0;
    } else {
        printf("Test Failed! Expected 24 but got %d\n", result);
        return 1;
    }
}
