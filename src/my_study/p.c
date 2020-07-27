#include <stdio.h>
void func(int *pvalue);
int getaverage(int data[10]);

int main(void)
{
    int value = 10;
    printf("&value = %p\n", &value);
    func(&value);
    printf("value = %d\n", value);

    int average, array[10] = {15, 78, 98, 15, 98, 85, 17, 35, 42, 15};
    average = getaverage(array);
    printf("%d\n", average);
    return 0;
}

void func(int *pvalue)
{
    printf("pvalue = %p\n", pvalue);
    *pvalue = 100;
    return;
}

// (int data[])や(int* data)が正しい
int getaverage(int data[10])
{
    int i;
    int average = 0;
    for (i = 0; i < 10; i++)
    {
        average += data[i];
    }
    return average / 10;
}