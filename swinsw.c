#include <stdio.h>
int main()
{
    int age, marks;

    printf("enter your age?");
    scanf("%d", &age);

    printf(" enter your marks?");
    scanf("%d", &marks);

    switch (age)

    {
    case 10:
        printf("your age is 10");
        // break;
        switch (marks)
        {

        case 30:
            printf("marks are 30");
            break;

        default:
            printf(" we don't know");
        }
        break;

    case 15:
        printf(" your age is 15");
        break;
    case 20:
        printf("you are 20 years old");
        break;
    default:
        printf("nothing");
    }
    return 0;
}