#include <stdio.h>

void p_01(void) {
    int a=0, sum=0;
    while(1) {
        a++;
        if(a > 7) break;
        if(!(a % 2)) continue;
        sum += a;
    }
    printf("a=%d, sum=%d\n", a, sum);
}
