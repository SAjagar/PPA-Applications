#include<stdio.h>

int main()
{
    int standard = 0;
    
    printf("Enter your standard: \n");
    scanf("%d",&standard);
    
    switch(standard)
    {
        case 1 :
             printf("your exam is at 7 AM\n");
             break;
        case 2 :
             printf("your exam is at 8 AM\n");
             break;
        case 3 :
             printf("your exam is at 9 AM\n");
             break;
        case 4 :
             printf("your exam is at 10 AM\n");
             break;
        default:
             printf("Wrong choice\n");
    }

    return 0;
}