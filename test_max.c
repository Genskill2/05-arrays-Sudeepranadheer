#include <stdio.h>
#include <assert.h>



int max(int a[], int n){
  
  int i,x=a[0];
  for(i=0;i<n;i++)
  {
      if(x<a[i])
       x=a[i];
  }
   return x; 
{
Printf("%d",x)
}
