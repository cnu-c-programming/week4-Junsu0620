#include <stdio.h>

void my_print(char type, void* x) {
    if (type == 'C') {
        char *t = (char*)x;
        printf("%c\n", *t);
    }
    if (type == 'D') {
        int *t = (int*)x;
        printf("%d\n", *t);
    }
    else if (type == 'S') {
        char *t = (char*)x;
        printf("%s\n", t);
    }
    
}

int main() {
    int a = 0x61;
    char b = 'b';
    char* c = "hello world";

    my_print('C', &a);
    my_print('D', &b);
    my_print('S', c);
    my_print('C', c);

    return 0;
}
