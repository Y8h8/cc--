#include<iostream>
#include <string.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string s1=s;
    int n=s1.length();
    for (int i = 0; i < n/2; i++)
    {
        swap(s1[i],s1[n-i-1]);
    }
    int result = strcmp(s.c_str(), s1.c_str());

    if (result < 0)
    {
    printf("%d\n",-1);
    }
    else if (result > 0)
    {
    printf("%d\n", 1);
    }
    else {
    printf("%d\n", 0);
    }

}
