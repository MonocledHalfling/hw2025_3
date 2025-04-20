#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generate_number() {
    int num = 0;
    while (1) {
        // srand(time(NULL)); // 진짜 렌덤하게 하려고 함 과제에서는 굳이 없어도..
        num = rand() % 50 + 1;
        if (num >= 11) break;
    }
    return num;
}

void p_09(void) {
    int cp = generate_number();

    while (1) {
        int ip;
        scanf("%d", &ip);
        if (ip == 0) {
            break;
        } else if (ip > cp) {
            if (abs(ip - cp) > 10)
                printf("너무 큼");
            else
                printf("큼");
        } else if (ip < cp) {
            if (abs(ip - cp) > 10)
                printf("너무 작음");
            else
                printf("작음");
        } else if (ip == cp) {
            printf("정답");
            break;
        } else {
            printf("잘못된 입력");
            break;
        }
    }
}
