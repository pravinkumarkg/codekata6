#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n1,n2,count=0;
     cin>>n1>>n2;
	 int arr[n1];
    for(int i=0;i<n1;i++)
    {
    	cin>>arr[i];
    }
    for(int j=0;j<n1;j++)
    {
    	if(arr[j]==n2)
    	count++;
    }
    cout<<count;
    return 0;
}
