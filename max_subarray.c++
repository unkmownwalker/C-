#include<bits/stdc++.h>
using namespace std;
int divide_and_conquer(int a[],int left,int right)    //最大子数组的分治算法
{
   if(left==right)  
   return a[left];
   int mid=(left+right)/2;
   int left_max=divide_and_conquer(a,left,mid);
   int right_max=divide_and_conquer(a,mid+1,right);
    
   int left_sum=-9999,right_sum=-9999,cur1=0,cur2=0;
   for(int i=mid;i>=left;i--)
   {
      cur1+=a[i];
      left_sum=max(cur1,left_sum);

   }
   for(int i=mid+1;i<=right;i++)
   {
      cur2+=a[i];
      right_sum=max(cur2,right_sum);
   }
   int midmax=right_sum+left_sum;
   return max(max(left_max,right_max),midmax);
}
int main()
{
   int n;
   cin>>n;
   vector<int> a(n+1);
   for(int i=0;i<n;i++)
      cin>>a[i];
   int maxarray= divide_and_conquer(&a[0],0,n-1);
   cout<<maxarray;
   return 0;
}



