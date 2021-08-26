#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char s[100];
    scanf("%[^\n]s",s);
    int up=0,low=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(isupper(s[i]))
            up++;
        else if(islower(s[i]))
            low++;
    }
    printf("Uppercase = %d\nLowercase = %d",up,low);
}