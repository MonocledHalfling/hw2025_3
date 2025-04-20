#include <stdio.h>
#include <stdlib.h>

int get_dice_B() {
    double ls[6] = {0.15, 0.16, 0.17, 0.17, 0.17, 0.18};
    int rn = rand() % 100;

    if (rn < ls[0] * 100) {
        return 1;
    } else if (rn < (ls[0] + ls[1]) * 100) {
        return 2;
    } else if (rn < (ls[0] + ls[1] + ls[2]) * 100) {
        return 3;
    } else if (rn < (ls[0] + ls[1] + ls[2] + ls[3]) * 100) {
        return 4;
    } else if (rn < (ls[0] + ls[1] + ls[2] + ls[3] + ls[4]) * 100) {
        return 5;
    } else {
        return 6;
    }
}


void p_08(void) {
    int count[13] = {0};  // 0~12 사용, 2~12만 출력
    srand(10);

    for (int i = 0; i < 1000000; i++) {
        int a = rand() % 6 + 1;
        int b = get_dice_B();
        count[a + b]++;
    }

    printf("합\t횟수\t확률(%%)\n");
    for (int i = 2; i <= 12; i++) {
        printf("%2d\t%7d\t%.4f%%\n", i, count[i], count[i] / 10000.0);
    }
}
