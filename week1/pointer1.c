#include <stdio.h>

int main() {
    int a = 5;
    int *p = &a;

    *p = 10;

    printf("a = %d\n", a);
    return 0;
}
//👉 問題：這段程式碼輸出什麼？為什麼？ 
//👉 延伸：如果改成 p = NULL; *p = 10; 會發生什麼？
