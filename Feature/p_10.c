#include <ctype.h>
#include <stdio.h>

void p_10(void) {
    for (int i = 0x00; i <= 0x7F; i++) {
        int int16 = i;
        int n1 = isalnum(i);
        int n2 = isalpha(i);
        int n3 = iscntrl(i);
        int n4 = isdigit(i);
        int n5 = isxdigit(i);
        int n6 = ispunct(i);
        int n7 = isprint(i);
        int n8 = isspace(i);

        printf("0x%02X \t%c \t%d \t%d \t%d \t%d \t%d \t%d \t%d \t%d\n",
            int16, i, n1, n2, n3, n4, n5, n6, n7, n8);
    }
}
