#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int count=0;
    for (int i = 1; i <= 10; ++i)
    {
        for (int j = 1; j <= 20; ++j)
        {
            for (int k = 1; k <= 40; ++k)
            {
                int d=40-i-j-k;
                if (d>=1&&(10*i+5*j+2*k+d)==100)
                {
                    ++count;
                }
                
                
            }
            
        }
        
    }
    cout<<count;
}