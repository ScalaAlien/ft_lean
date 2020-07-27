#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[10];
    strcpy(str, "MARIO");
    printf("%s\n", str);

    char str1[] = "MARIO", str2[10];
    strncpy(str2, str1, 3);
    str2[3] = '\0';
    printf("%s\n", str2);

    char str3[] = "DRAGON"
                  "QUEST";
    printf("%s\n", str3);

    char str4[12] = "DRAGON";
    char str5[] = "QUEST";
    strcat(str4, str5);
    printf("%s\n", str4);

    char str6[14] = {}; //sizeof?
    char str7[] = "DRAGON";
    char str8[] = "QUEST";
    int i = 3;
    sprintf(str6, "%s%s%d\n", str7, str8, i);
    printf(str6);

    // int j;
    // char str9[256];
    // scanf("%255s", str9);
    // for (j = 0; str9[j] != '\0'; j++)
    //     ;
    // printf("%d\n", j);

    // int k;
    // char str10[256];
    // scanf("%s", str10);
    // k = strlen(str10);
    // printf("%d\n", k);

    //文字列比較は、strcmp.forで比較するときは、EOSまでを比較しなければならない、つまり元の文字より１文字多く比較する

    return 0;
}