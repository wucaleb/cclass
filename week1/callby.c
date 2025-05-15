#include <stdio.h>

void change(int x) {
    x = 100;
}

void changePtr(int *x) {
    *x = 100;
}

int main() {
    int a = 5;
    change(a);
    printf("After change: a = %d\n", a);

    changePtr(&a);
    printf("After changePtr: a = %d\n", a);

    return 0;
}
