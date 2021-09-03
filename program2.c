#include<stdio.h>
int main()
{
    int num,i;
    printf("enter a number: ");
    scanf("%d",&num);
    i = num;
    do{
        printf("%d\n",i);
        i = i-1;
    
    }while(i>0);
    
    return 0;
}