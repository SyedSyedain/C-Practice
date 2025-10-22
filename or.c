#include<stdio.h>

int main ()   {
printf("enter your marks in theory\n");
int theory ;
     scanf("%d", &theory);
printf("enter your practical marks\n");
int practicals;
     scanf("%d",&practicals );

if (theory>=40 || practicals>=40)   {
   printf("you are pass\n");}
  
else{
    printf("you are not pass\n");
}
return 0;
}