#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter the value of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=10;j++)
        {
            printf("%d\t",(i*j));
        }
        printf("\n");
    }
    return 0;
}