#include<stdio.h>
#include<string.h>

int main()
{
    FILE* file;

    file = fopen("C:\\temp\\data.txt","w");
    char s[100];
    scanf("%s",s);
    fprintf(file,"%s\n",s);
    while(strcmp(s,".") != 0)
    {
        scanf("%s",s);
        fprintf(file,"%s\n",s);
    }
    fclose(file);
}