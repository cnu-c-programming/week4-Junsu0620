#include <stdio.h>

void swap_endian(int *x) {
    char *p = (char*)x;
    char t;
    
    t = *(p + 0);
    *(p + 0) = *(p + 3);
    *(p + 3) = t;

    t = *(p + 1);
    *(p + 1) = *(p + 2);
    *(p + 2) = t;

}

int main() {
    int x = 0x12345678;

    printf("%x\n", x);
    swap_endian(&x);
    printf("%x\n", x);

    return 0;
}
