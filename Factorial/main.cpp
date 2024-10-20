#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,j=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        j*=i;
    }
    cout<<j;
}