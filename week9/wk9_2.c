#include<stdio.h>
#include<string.h>

int main()
{
    char s[50];
    scanf("%[^\n]s",s);
    printf("%s",strrev(s));
}