/*Write a C program to check whether a person can enter a restricted area.

Conditions:

The person must be at least 18 years old AND have an ID card

But if the person is banned, they cannot enter, even if both conditions are true */
#include<stdio.h>
int main ()  
{
printf("enter your age?\n");
int age ;
scanf("%d",&age);
printf("do you have an ID card?(1 for yes 0 for no)\n");
int ID;
scanf("%d",&ID);
printf("if you are banned press 1 else o\n");
int banned;
scanf("%d",&banned);
//if (age>=18 && ID ==1 && banned ==0)    
 if (age >= 18 && ID == 1 && !banned)
{
    printf("you can enter the area");
}
else if (age>=10 && age<=17)
{
    printf("you are baby");
}

else{
    printf("get lost");
}
return 0;


}