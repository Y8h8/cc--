#include<iostream>
using namespace std;
int main()
{
    int a[100],n,count=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if (a[i]==2)
        {
            ++count;
        }
    }
    cout<<count;
    
}