#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point p1 = {1, 2};
    struct Point p2 = p1;

    p2.x = 5;

    printf("p1.x = %d\n", p1.x);
    printf("p2.x = %d\n", p2.x);

    return 0;
}
//👉 問題：這段程式碼輸出什麼？為什麼 p1 沒變？
