#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf(" enter number 1\n");
    scanf("%d", &num1);

    printf(" enter number 2\n");
    scanf("%d", &num2);
    
    printf(" enter number 3\n");
    scanf("%d", &num3);
    
    if (num1 > num2 && num1 > num3)
    {
        printf("NUM1 IS LARGEST");
    }
    else if (num2 > num1 && num2 > num3)

    {
        printf("NUM2 IS LARGEST");
    }
    else if (num3 > num1 && num3 > num2)
    {
        printf("NUM3 IS LARGEST");
    }
    else
        printf("numbers are same");

    return 0;
}