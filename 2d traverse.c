#include<stdio.h>
void main()
{
    int a[100][100],r,c,i,j;
    printf("enter no of rows and column \n ");
    scanf("%d%d",&r,&c);
    for (i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("elements of 2 d array are\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\n",a[i][j]);
        }
    }
}