#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char s[50];
    scanf("%[^\n]s",s);
    int l = strlen(s);
    for(int i=0;i<l;i++)
    {
        if(isupper(s[i]))
            printf("%c",tolower(s[i]));
        else    
            printf("%c",toupper(s[i]));
    }
}