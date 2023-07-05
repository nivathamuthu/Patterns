#include<stdio.h>
#include<conio.h>
void main()
{
    int j,i,n,m;
    m=(n+1)/2;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
            {
                printf("%d",n--);

            }
             if(i<m)
             {
                 printf("%d",j);
             }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

