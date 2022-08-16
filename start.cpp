#include<bits/stdc++.h>

using namespace std;
int main()
{
   int a,b,m,n,i,j,k,x,cnt,sum;
   cin>>n;

   cnt=0;
   sum=0;
   for(i=1;i<=sqrt(n);i++)
   {
       if(n%i==0)
       {
           cnt++;
           sum+=cnt;
       }
   }
    cout<<sum+n;

    return 0;
}