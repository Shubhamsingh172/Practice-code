#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int *p1 = &a, *p2 = &b;
    
    *p1 = *p2;
    *p2 = *p1 + *p2;
    
    printf("%d %d\n", a, b);
    return 0;
}
