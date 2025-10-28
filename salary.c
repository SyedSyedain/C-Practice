#include <stdio.h>
int main()
{
    float Basic_Pay, HRA, DA, Gross_Salary, TAX, Net_Salary;

    printf("Enter the basic salary of the employe?\n");
    scanf("%f", &Basic_Pay);

   // float HRA_Percent = 20.0;
   // float DA_Percent = 10.0;
  //  float TAX_Percent = 5.0;

    // CALCULATIONS

    HRA = (20.0 / 100) * Basic_Pay;
    DA = (10.0 / 100) * Basic_Pay;
    TAX = (5.0 / 100) * Basic_Pay;

    Gross_Salary = Basic_Pay + HRA + DA;
    Net_Salary = Gross_Salary - TAX;

    printf("---------------------------------\n");
    printf("EMPLOYE SALARY SLIP\n");
    printf("---------------------------------\n");
    printf("---------------------------------\n");
    printf("---------------------------------\n");
    printf("Basic pay : %.2f\n", Basic_Pay);
    printf("HRA%% : %.2f\n", HRA);
    printf("DA%% : %.2f\n", DA);
    printf("TAX%% : %.2f\n", TAX);

    printf("---------------------------------\n");
    printf("GROSS SALARY:%.2f\n",Gross_Salary);
    printf("NET SALARY:%.2f\n",Net_Salary);
    printf("----------------------------------\n");
    printf("----------------------------------\n");
    printf("----------------------------------\n");

return 0;


}
