#include <stdio.h>

int main(void)
{
    int i;
    FILE *file;
    file = fopen("text.txt", "r");
    fscanf(file, "%d", &i);
    fclose(file);
    printf("%d\n", i);
    return 0;
}