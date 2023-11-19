#include <stdio.h>
int main() { int a = 0;int b = 10;
    while (a <= 10000) {
        printf("%d\n", a);
        a += b;
    }
    return 0;
}
