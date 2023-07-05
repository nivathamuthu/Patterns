#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,m;
    char a='*';
    printf("\n Enter a n element:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=(n-i);j++)
        {
            if(i==0)
            {
            printf("*");
        }
        else if(j==0)
        {
            printf("*");
        }
        else if((n-i)==j)
        {
            printf("*");

        }
        else{
            printf(" ");
        }
        }
        printf("\n");
    }
}
