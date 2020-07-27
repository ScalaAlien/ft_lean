#include <stdio.h>
int f(int t)
{
    int n = 0;
    for (;;)
    {
        printf("%dつ目の整数を入力してください。＞", t);
        scanf("%d", &n);
        if (1 <= n && n <= 10)
        {
            return n;
        }
        else
        {
            scanf("%*[^\n]");
            printf("1～10以外の数字が入力されました。\n");
        }
    }
    return 0;
}
int main(void)
{
    int n[2] = {};
    printf("1～10までの整数を2つ入力してください。\n");
    n[0] = f(1);
    n[1] = f(2);
    printf("和は「%d」です。\n", n[0] + n[1]);
    printf("積は「%d」です。\n", n[0] * n[1]);
    return 0;
}