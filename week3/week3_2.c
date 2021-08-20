#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int m = 2*n-1;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(i<n-1)
                {
                    if(j>=i+1 && j<=m-i-2)
                        printf(" ");
                    else
                        printf("*");
                }
            else if(i == n-1)
                printf("*");
            else
                {
                    if(j>=m-i && j<=i-1)
                        printf(" ");
                    else
                        printf("*");
                }
        }
        printf("\n");
    }
}