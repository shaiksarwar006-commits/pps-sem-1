//program to authenticate the user
#include<stdio.h>
int main()
{
 int uid,upswrd,sid,spswrd;

 sid=9247;
 spswrd=1234;


 printf("ENTER THE USER ID");
 scanf("%d",&uid);

 printf("ENTER THE USER PASSWORD");
 scanf("%d",&upswrd);


 if((uid==sid)&&(upswrd==spswrd))
 printf("LOGIN SUCCESSFULL");

 else
printf("INVALID CREDINTIALS");
return 0;
}
