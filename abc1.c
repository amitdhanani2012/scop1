#include "abc.c"
extern int num2;
int main()
{ extern int num1;
  printf("num is %d\n",num1);
  printf("num2 is %d\n",num2);
}

