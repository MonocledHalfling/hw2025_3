#include <stdio.h>

int gcd(int a, int b) { // b = 10, a = 20
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void p_07(void) {
    int a = 20, b = 30;
    int rs_gcd = gcd(a, b);
    int rs_lcm = (a * b) / rs_gcd;

    printf("최대공약수(GCD): %d\n", rs_gcd);
    printf("최소공배수(LCM): %d\n", rs_lcm);
}