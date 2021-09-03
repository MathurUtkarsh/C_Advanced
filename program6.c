#include<stdio.h>
int main()
{
    int a,x,i,flag = 0; 
    printf("Enter the Number : ");
    scanf("%d",&a);
    x = a / 2;
    for(i=2;i<=x;i++)
    {
        if(a % i == 0)
        {
            printf("Number is not Prime");
            flag = 1;
            break;
        }
    }
    
    if(flag == 0)
    printf("Number is Prime");
    return 0;
}