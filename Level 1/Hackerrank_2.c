#include<stdio.h>
int main()
{
 int a[3],b[3],c[2],i,alice=0,bob=0,no=0;
  for(i=0;i<3;i++)
  scanf("%d",&a[i]);
  for(i=0;i<3;i++)
  scanf("%d",&b[i]);
 for(i=0;i<3;i++)
 {
     if(a[i]>b[i])
     alice++;
     else if(a[i]<b[i])
     bob++;
     else if(a[i]==b[i])
     no++;
 }
 c[0]=alice;
 c[1]=bob;
 for(i=0;i<2;i++)
 printf("%d",c[i]);
}
