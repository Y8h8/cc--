#include<iostream>
using namespace std;
long long int S(int a,int n)
{
	long long int Sn=0;
	long long int k=0;
	for(int i=1;i<=n;i++)
	{
		k=k*10+1;
		Sn=Sn+k;
	}
	return Sn*a;
}
int main()
{
	int a,n;
	cin>>a>>n;
	cout<<S(a,n);
}