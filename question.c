#include <stdio.h>
int main()
{
    float bill, units;
    printf("Enter the number of units consumed?");
    scanf("%f", &units);

    if (units <= 100)
    {
        bill = units * 5;
        printf("your electricty bill for %0.1f units is %.1f\n", units, bill);
    }
    else if (units >=100 && units<=200)
    {
        bill = (5 * 100) + (units - 100) * 7;
        printf("your electricty bill for %0.1f units is %.1f\n", units, bill);
    }
    else
    {
        bill = (5 * 100) + (100 * 7) + (units -200) * 10;
        printf("your electricty bill for %0.1f units is %.1f\n", units, bill);
    }
    return 0;
}
