#include<iostream>
using namespace std;
int main()
{
    char *p;
    p=(char *)malloc(100);
    fgets(p,100,stdin);
    cout<<p;
}