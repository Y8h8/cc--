#include<iostream>
using namespace std;

int tj(int n)
{
    if (n==1||n==2)
    {
        return n;
    }
    return tj(n-1)+tj(n-2);
    
}
int main()
{
    int n;
    cin>>n;
    cout<<tj(n);
    return 0;
}