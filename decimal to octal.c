//program to convert decimal to octAL
#include<stdio.h>
void main()
{


int n,oct=0,i=1,rem,original;

printf("ENTER THE DECIMAL VALUE TO CONVERT INTO OCTAL\t");
scanf("%d",&n);
original=n;
while(n!=0)
{
rem=n%8;
n=n/8;
oct=oct+(rem*i);
i=i*10;

}
printf("(%d)in decimal=(%d)in octal",original,oct);
}
