#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,m;
    char a='*';
    printf("\n Enter a n element:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

