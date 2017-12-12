#include<stdio.h>
#include<string.h>
int main()
{
int a[5]={1,2,3,4,5};
int target=3;
int i,m,j;
printf("Assign program\n");
for(i=0;i<5;i++)
{
  m= target-a[i];
  for(j=0;j<=5;j++) 
  if(m==a[j])
  printf("[%d,%d]\n",i,j);
  break;
   
}
return 0;
}
