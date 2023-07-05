#include<stdio.h>
#include<conio.h>
void main()
{
    int n, i,j,s;
    printf("\n Enter a number:");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=1;j<=(n-i);j++)
        {
            printf(" ");
        }
         for(s=i;s>0;s--)
        {
            printf("* ");
        }

        printf("\n");
    }

}
