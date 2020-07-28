#include <stdio.h>
int f(int n, int i)
{
    for (;;)
    {
        if (1 <= n && n <= 10)
        {
            printf("%dつ目の整数を入力してください。＞", i);
            return n;
        }
        else
        {
            printf("1～10以外の数字が入力されました。\n");
        }
    }
    return 0;
}
int main(void)
{
    int n = 0;
    int i = 1;
    double sum = 0;
    double mul = 1;
    printf("%dつ目の整数を入力してください。＞", i);
    while (scanf("%d", &n) != EOF)
    {
        i++;
        n = f(n, i);
        sum += n;
        mul *= n;
    }
    printf("\n");
    printf("和は「%.1f」です。\n", sum);
    printf("積は「%.1f」です。\n", mul);
    printf("平均は「%.1f」です。\n", sum / (i - 1));
    return 0;
}