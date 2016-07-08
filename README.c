# sum-of-natural
#include<stdio.h>
int main()
{
int arr[5]={5,3,-2,1,4},ctr=0,sum=0;
for(ctr=0;ctr<5;ctr++)
{
  if(arr[ctr]>0)
    sum=sum+arr[ctr];
}
  printf("sum:%d",sum);
  }
