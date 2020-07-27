#include <stdio.h>
#include <string.h>

typedef struct
{
    /* data */
    int i;
    char c[1024];
} my_struct;

void my_struct_print(my_struct *a)
{
    printf("%d\n", a->i);
    printf("%s\n", a->c);
    return;
}

int main(void)
{
    my_struct a;
    my_struct *p_a;

    p_a = &a;
    p_a->i = 1;
    strcpy(p_a->c, "test");
    my_struct_print(p_a);

    return 0;
}
