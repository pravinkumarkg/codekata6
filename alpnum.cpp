#include <iostream>
#include <string>
using namespace std;
int main()
{
    string input;
    int count=0;
    getline(cin,input);
    for(int i=0;i<input.length();i++)
    {
        if(isdigit(input[i]) || isalpha(input[i]))
        {
            count++;
        }
    }
    if(count==input.length())
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    
    return 0;
}
