//program to change binary to decimal
#include<stdio.h>
void main()
{
long long bin=0,original,i=1,rem,n;
printf("ENTER THE DECIMAL VALUE TO CONVERT INTO BINARY ");
scanf("%11d",&n);
original=n;
while(n!=0)
{
rem=n%2;
n=n/2;
bin=bin+(rem*i);
i=i*10;

}
printf("(%11d)=(%11d)",original,bin);
}
