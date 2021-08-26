#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    scanf("%[^\n]s",s);
    int up=0,low=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i] >= 65 && s[i] <= 90)
            up++;
        else if(s[i] >= 97 && s[i] <= 122)
            low++;
    }
    printf("Uppercase = %d\nLowercase = %d",up,low);
}