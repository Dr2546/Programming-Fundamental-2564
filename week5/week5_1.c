#include<stdio.h>

int main()
{
    FILE *fa = fopen("a.txt","r");
    FILE *fb = fopen("b.txt","w");
    int a,b;
    fscanf(fa,"%d %d",&a,&b);
    fprintf(fb,"%d",a+b);
    fclose(fa);
    fclose(fb);
}