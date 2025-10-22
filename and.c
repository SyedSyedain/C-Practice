#include<stdio.h>

int main ()   {
printf("enter your age?\n");
int age ;
     scanf("%d", &age);
printf("are you a citizen? write 1 for yes and 0 for no\n");
int citizen;
     scanf("%d",&citizen );

if (age>=18 && citizen ==1)   {
   printf("you are eligible\n");}
  
else{
    printf("you are not eligible\n");
}
return 0;
}