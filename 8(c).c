
#include<stdio.h>
void main()
{
int A[3][3],sp[10][3],i,k=0,j,z=0,nz=0;
printf("ENTER 9 VALUES OF MATRIX:");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&A[i][j]);
if(A[i][j]==0)
z++;
else
nz++;

if(z>nz)
printf("THE GIVEN MATRIX IS SPARS");
else
printf("THE GIVEN MATRIX IS not SPARS");

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
    if(A[i][j]!=0)
    {
    sp[k][0]=i;
    sp[k][1]=j;
    sp[k][2]=A[i][j];
    k++;
    }
}
}

printf("\n SPARS MATRIX IS=\n");
for(i=0;i<nz;i++)
{
for(j=0;j<3;j++)
{
printf("%d ",sp[i][j]);
printf("\n");
}
}
}
