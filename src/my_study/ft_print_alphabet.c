#include <unistd.h>

void ft_print_alpabet(void)
{
    char a = 'a';
    char z = 'z';
    while (a <= z)
    {
        write(1, &a, 1);
        a++;
    }
}

int main(void)
{
    ft_print_alpabet();
    return 0;
}