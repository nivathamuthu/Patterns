#include<stdio.h>
#include<conio.h>
void main()
{
    int j,n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j==i)
            {
                printf("%d",i);
            }
            else if(j==n-i)
            {
                printf("%d",n-i);

            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");

    }
}
