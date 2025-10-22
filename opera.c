#include <stdio.h>
int main ()
{
    int a,b,c,d;
    a = 10;
    b = 20;
    c = 5;
    d = 25;
  
      printf("a + b = %d\n",a!=b);

      printf("a + b = %d\n",a+b);

 printf("a / b = %d\n",a/b);

      printf("a - b = %d\n",a-b);

 printf("d %% c = %d\n", d%c );  /* here we used two times %% because the compiler does not understands that we just want to use 
                                  it as a showcase
                                 thats why we use it multiple times so that it acts as a escape character*/  
                                    

    return 0;
}