#include<iostream>
#include<string>
using namespace std;
string isSymmetric(int num)
{
    string str=to_string(num);
    int len=str.length();
    for(int i=0;i<len/2;i++)
    {
        if(str[i]!=str[len-i-1])
        {
            return "no";
        }
    }
    return "yes";
}
int main()
{
    int i=0;
    cin>>i;
    cout<<isSymmetric(i);
    return 0;
}