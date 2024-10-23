#include<iostream>
using namespace std;
int main()
{
    char c;
    int n;
    char* p;

    scanf("%d",&n);
    p=(char*)malloc(n);
    scanf("%c",&c);//注意在scanf和gets中间使用scanf("%c",&c),去除换行
    fgets(p,n,stdin);
    fputs(p,stdout);
}