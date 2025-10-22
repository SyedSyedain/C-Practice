#include<stdio.h>
int main()
{
int num ,i;
printf("enter the number");
scanf("%d",&num);
printf("table of number:%d\n",num);
for (i=1;i<=10;i++)

//printf("%d\n",num*i);
printf("%d x %d = %d\n",num,i,num*i);                /*"%d x %d = %d\n"
                                                     This is a template that says:

                                                     “print an integer (%d), then print x, then another integer (%d), then =,
                                                      then another integer (%d), and finally move to a new line (\n).*/
  return 0;



}