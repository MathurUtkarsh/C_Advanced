#include<stdio.h>
int main()
{
    int sum = 0;
    char name[20];
    int i = 0;

    printf("Enter Your Name : ");
    scanf("%s", &name);

    while(name[i] != '\0')
    {
        printf("\n The ASCII value of character %c is %d",name[i],name[i]);
        sum  = sum + name[i];
        i++;
    }
    
    printf("\nSum of the ASCII value is : %d",sum);
    return 0;

}