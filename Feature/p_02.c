#include <stdio.h>

int p_02(void) {
    char name[9];
    int number;

    printf("name: ");
    fgets(name, sizeof(name), stdin);
    getchar();

    printf("number: ");
    scanf("%9d", &number);
    getchar();

    printf("%s (%d)\n", name, number);

    return 0;
}