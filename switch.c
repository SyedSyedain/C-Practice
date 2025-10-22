// switch is used only incase of char and int
// break statement is not necesarry
// if break is not used the below code is also checked and executed
// default statement is also not necesarry
#include<stdio.h>
   int main()
   {
int num;
        printf("enter the number");
scanf("%d",&num);
switch(num)
{
case 1:
printf("yellow");
break;
case 2:
printf("green");
break;
case 3:
printf("orange");
break;
default:
printf("\"you know nothing jon snow\"");
break;
}
return 0; 
}

