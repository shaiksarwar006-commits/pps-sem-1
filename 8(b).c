//write a c prgrm to chk whether a given matrix is spar or not
#include<stdio.h>
void main()
{
int A[3][3],i,j,z=0,nz=0;
printf("ENTER 9 VALUES OF MATRIX:\n");
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
printf("THE GIVEN MATRIX IS NOT A SPARS MATRIX");
}
