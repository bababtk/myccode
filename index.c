#include<stdio.h>


 main(){
  int arr[20],n,res;
  printf("enter number of elements u want to find the sum of");
  scanf("%d",&n);
  res=array(arr,n);
  printf("the sum is %d ",res);
}

int array(int a[20], int m)
{
  int i,sum=0;
  printf("enter array elements");
  for(i=0;i<m;i++)
  {scanf("%d",&a[i]);
  }
  
  for(i=0;i<m;i++)
  {
    sum=sum+a[i];
  }
  
  return sum;
}
