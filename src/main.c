#include <stdio.h>
#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    char c = 'z';
    while (c >= 'a')
    {
        write(1, &c, 1);
        c--;
    }
    printf("\n");
}

void ft_is_negative(int n)
{
    if (n < 0)
    {
        printf("%c\n", 'N');
    }
    else
        printf("%c\n", 'P');
}

int main(void)
{
    ft_print_reverse_alphabet();
    return 0;
}
