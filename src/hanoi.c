/* C program for Tower of Hanoi*/
/*Application of Recursive function*/
#include <stdio.h>
//課題4
//「再帰関数を使用し、ハノイの塔を実装する。」
void hanoifun(int n, char fr, char tr, char ar) //fr=from rod,tr =to rod, ar=aux rod
{
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", fr, tr);
        return;
    }
    hanoifun(n - 1, fr, ar, tr);
    printf("\n Move disk %d from rod %c to rod %c", n, fr, tr);
    hanoifun(n - 1, ar, tr, fr);
}

int main()
{
    int n = 4;                  // n immplies the number of discs
    hanoifun(n, 'A', 'C', 'B'); // A, B and C are the name of rod
    printf("\n");
    return 0;
}