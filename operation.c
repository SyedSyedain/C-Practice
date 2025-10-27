#include <stdio.h>
int main()
{
    char operation;
    printf(" Enter the desired operator(+,-,/,*)\n");
    scanf("%c",&operation);
    double Num1, Num2, result;
    printf("Enter the first Number?");
    scanf("%lf",&Num1);
    printf("Enter the second Number?");
    scanf("%lf", &Num2);

    switch (operation)
    {
    case '+':
        result = Num1 + Num2;
        printf("The sum of %.1lf and %.1lf is %.1lf\n", Num1, Num2, result);
        break;
    case '-':
        result = Num1 - Num2;
        printf("The difference of %.1lf and %.1lf is %.1lf\n", Num1, Num2, result);
        break;
    case '/':
        result = Num1 / Num2;
        printf("The division of %.1lf and %.1lf is %.1lf\n", Num1, Num2, result);
        break;
    case '*':
        result = Num1 * Num2;
        printf("The product of %.1lf and %.1lf is %.1lf\n", Num1, Num2, result);
        break;
    default:
        printf("Select correctly");
    }
    return 0;
}