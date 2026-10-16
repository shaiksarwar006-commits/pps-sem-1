// fibonacci series using recursion
#include<stdio.h>
int fib(int n)
{
if(n==0)
return 0;
if(n==1)
return 1;

return fib(n-1)+fib(n-2);
}
void main()
{
int N,i;
printf("ENTER Nth TERM FOR FIBONACCI SERIES");
scanf("d",&N);
printf("fibinocci series up to %d is \n",N);
for(i=0;i<N;i++)
{
printf("%d",fib(i));
}
}
