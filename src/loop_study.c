#include <stdio.h>
int f(int n)
{
    if (n == 0)
    {
        return n;
    }
    return n + f(n - 1);
}
int main(void)
{
    printf("%d", f(10));
    return 0;
}