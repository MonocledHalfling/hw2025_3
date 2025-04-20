#include <stdio.h>



void p_06(void) {
    int s3 = 0;
    int sn4 = 0;
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0) {
            s3 += i;
        }

        if (i >= 20 && i <= 70) {
            if (i % 4 == 0) {
                continue;
            }

            sn4 += i;
        }
    }

    if (s3 > sn4) {
        printf("s3 > sn4 | %d\n", s3 - sn4);
    } else if (s3 < sn4) {
        printf("s3 < sn4 | %d\n", sn4 - s3);
    } else {
        printf("s3 == sn4 | 0\n");
    }
}