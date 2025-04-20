#include <stdio.h>

int func_1(int a, int b);
void func_2(void);

void p_05(void) {
    printf("%d\n", func_1(3, 4));
    func_2();
}

int func_1(int a, int b) {
    int i, sum = 0;
    for (i = 1; i <= b; i++)
        sum += a;
    return (sum);
}

void func_2(void) {
    unsigned short a = 0x1F55, b = 0xAAEE;
    printf("a_and_b = %#06x \n", (unsigned short)(a & b));
    printf("a_or_b = %#06x \n", (unsigned short)(a | b));
    printf("a_xor_b = %#06x \n", (unsigned short)a ^ b);
    printf("~a = %#06x\n", (unsigned short)~a);
    printf("a>>1 = %#06x \n", (unsigned short)a >> 1);
}
