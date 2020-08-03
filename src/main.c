#include <stdio.h>
int main(void)
{
    double sum = 0;
    double pro;
    double ave;
    double num;
    int i;
    pro = 1;
    i = 1;
    printf("%dつ目の数値を入力してください>", i);
    while (scanf("%lf", &num) != EOF)
    {
        sum += num;
        pro *= num;
        i++;
        printf("%dつ目の数字を入力してください>", i);
    }
    ave = sum / (i - 1);
    printf("\n和は「 %5.1f 」です。\n積は「 %5.1f 」です。\n平均は「 %5.1f 」です。\n", sum, pro, ave);
    return 0;
}