#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int *ptr;
    ptr = (int *)malloc(n*n*sizeof(int));
    for(int i=0;i<n*n;i++)
    {
        int dum;
        scanf("%d",&dum);
        ptr[i] = dum;
    }
    int mnum = n*(n*n + 1)/2;
    for(int j=0;j<n;j++)
    {
        int sum1 = 0;
        int sum2 = 0;
        for(int k=0;k<n;k++)
        {
            sum1 += ptr[j*n+k];
            sum2 += ptr[j + k*n];
       }
        if(sum1 != mnum || sum2 != mnum)
        {
            printf("No");
            return 0;
        }
    }
    int sum1 = 0;
    int sum2 = 0;
    for(int i=0;i<n;i++)
    {
        sum1 += ptr[i*n + i];
        sum2 += ptr[(i+1)*(n-1)];
    }
    if(sum1 != mnum || sum2 != mnum)
    {
        printf("No");
        return 0;
    }
    printf("Yes");
}