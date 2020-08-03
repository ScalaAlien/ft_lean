#include <stdio.h>
#define EXCISETAX 0.03 /* ここで定数を宣言 */
#define AUTHOR "森口将憲"
#define PRINT_TEMP printf("temp = %d\n", temp)
#define GET_TRAPEZOID_AREA(A, B, H) ((A + B) * H / 2) //マクロの副作用.呼び出し時にかっこをつける

int main(void)
{
    int price;
    printf("本体価格:");
    scanf("%d", &price);
    price = (int)((1 + EXCISETAX) * price); /* 定数使用 */
    printf("税込価格:%d\n", price);

    printf("作者名::%s\n", AUTHOR);

    int temp = 100;
    PRINT_TEMP;

    int up, down, h, s;
    printf("上底、下底、高さ:");
    scanf("%d,%d,%d", &up, &down, &h);
    s = GET_TRAPEZOID_AREA(up, down, (h + 3)); //マクロの副作用.呼び出し時にかっこをつける
    printf("面積:%d\n", s);
    return 0;
}