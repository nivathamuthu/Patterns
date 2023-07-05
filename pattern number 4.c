#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,m;
    printf("enter a number");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
            for(m=i;m>0;m--)
            {
                printf("%d",m);
            }

        printf("\n");
    }
}

