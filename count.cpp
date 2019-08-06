#include <iostream>
using namespace std;
int main()
{
    int count=0,n,rem;
    cin>>n;
    while(n>0)
    {
    	rem=n%10;
    	count++;
    	n=n/10;
    }
    cout<<count;
    return 0;
}
