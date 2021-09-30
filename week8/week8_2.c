#include<stdio.h>

int main()
{
    float height[10];
    float sum = 0.0;
    for(int i=0;i<10;i++)
        scanf("%f",&height[i]);

    for(int j=0;j<10;j++)
        sum += height[j]/10;
    printf("%.2f",sum);
    return 0;
}