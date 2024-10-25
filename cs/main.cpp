#include<iostream>
#include<stdlib.h>
#include <math.h>
using namespace std;
int main()
{
    double a,b;
    char c;
    cin>>a>>c>>b;
    if(c=='+')
    printf("%.2lf",a+b);
    else if(c=='_')
    printf("%.2lf",a-b);
    else if(c=='*')
        printf("%.2lf",a*b);
        else if(c=='/')
        {if(b==0)cout<<"Wrong input!";
        else printf("%.2lf",a/b);}
        else cout<<"wrong input!";
return 0;
}