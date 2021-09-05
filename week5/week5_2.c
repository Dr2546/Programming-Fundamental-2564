#include<stdio.h>

int main()
{
    FILE *fa = fopen("a.txt","r");
    FILE *fb = fopen("b.txt","w");
    
    int sum = 0;
    while(!feof(fa))
    {
        int i;
        fscanf(fa,"%d",&i);
        sum += i;
    }

    fprintf(fb,"%d",sum);

    fclose(fa);
    fclose(fb);
}