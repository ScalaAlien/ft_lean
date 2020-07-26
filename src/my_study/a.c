#include <stdio.h>
int main(void)
{
    int i = 0;
    double value, addition, multiplication = 1, average;
    printf("いくつかの任意の数値を入力すると和、積、平均を返すプログラムです。\n\
ctrl + d を押すまでいくつでも入力できます。\n");
    while (scanf("%lf", &value) != EOF)
    {
        i++;
        printf("%d個目の数値を入力してください。>", i);
        addition = addition + value;
        multiplication = multiplication * value;
    }
    average = addition / i;
    printf("\n和は%lfです。\n積は%lfです。\n平均は%lfです。\n", addition, multiplication, average);
    return 0;
}