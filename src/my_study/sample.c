#include <stdio.h>

int main()
{
    int n = 0;
    char s[1024] = {};
    scanf("%d %1000s", &n, s);
    for (int i = 0; i < n; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}