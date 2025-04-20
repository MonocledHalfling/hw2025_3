#include <stdio.h>

void func_ss(double *a, int n);

int func_bs(double *a, int n, double input);

void p_04(void) {
    double a[] = {85, 15.3, 3, 24.1, 35, 68.5, 8, 5};
    int AL = 8;
    printf("%d", AL);
    double s = 68.5;
    printf("Before : ");
    for (int i = 0; i < AL; i++) {
        printf("%4.1f ", a[i]);
    }
    func_ss(a, AL);

    printf("\nAfter : ");
    for (int i = 0; i < AL; i++) {
        printf("%4.1f ", a[i]);
    }

    int n = func_bs(a, AL, s);
    if (n == -1)
        printf("\nnot found : %d", n);
    else
        printf("\nindex of func_bs() : %d", n);
}

void func_ss(double *a, int n) {
    double temp[n] = {};
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (a[i] > a[j]) {
                temp[i] = a[i];
                a[i] = a[j];
                a[j] = temp[i];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        a[i] = temp[i];
    }
}

int func_bs(double *a, int n, double input) {
    for (int i = 0; i < n; i++) {
        if (a[i] == input) {
            return i;
        }
    }

    return -1;
}
