#include <stdio.h>

int main()
{
    char ch;
    char s[100];
    char sen [100];

    scanf("%c", &ch);
    scanf("%s", s);
    getchar();
    fgets(sen, 101, stdin);

    printf("%c\n" , ch);
    printf("%s\n" , s);
    printf("%s\n" , sen);


    return 0;
}