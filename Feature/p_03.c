#include <stdio.h>

void p_03(void) {
    int s3 = 0;
    int s5 = 0;
    for (int i = 0; i <= 100; i+=3) {
        if (i % 3 == 0) {
            s3 += i;
        }
        if (i >= 20 && i <= 70) {
            if (i % 5 == 1) {
                s5 += i;
            }
        }
    }

    printf("s3=%d, s5=%d\n", s3, s5);
    if (s3 > s5) {
        printf("s3 > s5\n");
    } else if (s3 < s5) {
        printf("s3 < s5\n");
    } else {
        printf("s3 == s5\n");
    }
}
