
#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,n,s;
    printf("\n Enter a n number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n-i);j++)
        {

                printf(" ");
            }
            if(i==5)
            {
                printf("*");
            }

            if(i+j==5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }


        printf("\n");
    }
}

