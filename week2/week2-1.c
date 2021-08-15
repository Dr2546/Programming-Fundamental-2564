//40
#include<stdio.h>
#include<string.h>

int main()
{
    char s[50];
    scanf("%[^\n]s",s);
    int l = strlen(s);
    for(int i=0;i<l;i++)
    {
        if(s[i] >= 65 && s[i] <= 90)
            printf("%c",s[i] + 32);
        else if(s[i] >= 97 && s[i] <= 122)
            printf("%c",s[i] - 32);
        else    
            printf("%c",s[i]);
    }
}