#include <iostream>
using namespace std;
int main() 
{
   
   int n,sum=0,split;
   cin>>n;
   while(n>0)
   {
       split=n%10;
       sum=sum*10+split;
       n=n/10;
   }
   while(sum>0)
   {
       split=sum%10;
        cout<<split<<" ";
        sum=sum/10;
   }
   return 0;
}
