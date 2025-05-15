**題目一**
```c
#include <stdio.h>

int main() {
    int a = 5;
    int *p = &a;

    *p = 10;

    printf("a = %d\n", a);
    return 0;
}
```
👉 問題：這段程式碼輸出什麼？為什麼？
👉 延伸：如果改成 p = NULL; *p = 10; 會發生什麼？


**題目二**
```c
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
    printf("After change: a = %d\n");

    changePtr(&a);
    printf("After changePtr: a = %d\n");

    return 0;
}
```
👉 問題：兩次 printf 分別輸出什麼？為什麼？


**題目三**
```c
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
```
👉 問題：這段程式碼輸出什麼？為什麼 p1 沒變？
