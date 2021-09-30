#include<stdio.h>

int main()
{
    float sum = 0.0;
    for(int i=0;i<10;i++)
    {
        float a;
        scanf("%f",&a);
        sum += a;
    }
    printf("%.2f",sum/10);
    return 0;
}