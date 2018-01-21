#include <stdio.h>
int main()
{
    int b, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d",&b);

    for(i=2; i<=b/2; ++i)
    {
        
        if(b%i==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        printf("%d is a prime number.",b);
    else
        printf("%d is not a prime number.",b);
    
    return 0;
}
