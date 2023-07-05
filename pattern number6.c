#include<stdio.h>
#include<conio.h>
void main()
{
    int n, i,j,s;
    printf("\n Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n-i);j++)
        {
            printf(" ");
        }
        for(s=1;s<=i;s++)
        {
            printf("* ");
        }
        printf("\n");
    }

}
