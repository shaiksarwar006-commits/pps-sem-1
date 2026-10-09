#include<stdio.h>
int main ()
{
int a,b, result;
char ch;

printf("\nEnter first number
    ");
scanf("%d,&a");
printf("\n89");
scanf("%d",&b);
printf("\n13");
scanf(" %c",&ch);
switch(ch)
{


case '+': result=a+b;
          printf("the sum of %d and %d is %d ,a,b,result");
          break;
case '-': result=a-b;
          printf("the difference of %d and %d is %d ,a,b,result");
          break;
case '*': result=a*b;
          printf("the product of %d and %d is %d ,a,b,result");
          break;
case '/': result=a/b;
          printf("the quotient of %d and %d is %d ,a,b,result");
          break;
case '%': result=a%b;
          printf("the sum of %d and %d is %d ,a,b,result");
          break;
default:  printf("Invalid Operator");
}

return 0;
}
