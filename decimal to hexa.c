//program to convert decimal to hexa
#include<stdio.h>
void main()
{


int n,hex=0,i=1,rem,original;

printf("ENTER THE DECIMAL VALUE TO CONVERT INTO hexa\t");
scanf("%d",&n);
original=n;
while(n!=0)
{
rem=n%16;
n=n/16;
hex=hex+(rem*i);
i=i*10;

}
printf("(%d)in decimal=(%d)in hexa ",original,hexg);
}
