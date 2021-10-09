#include<stdio.h>
int main()
{
    int number;
    printf("Enter any numuber : ");
    scanf("%d",&number);
    int i = 1;
    do{
        printf("%d\n",number*i);
        i++;
    }
    while(i<=10);
    return 0;
}
