#include<iostream>
using namespace std;
static const int Max = 100;
typedef int T;
typedef struct{
    T data[Max];
    int length;
}SqList;
bool ListInsert(SqList &L,int i,T e)
{
    if(i<1 || i>L.length+1)
        return false;
    if (L.length>=Max)
    {
        return false;
    }
    
    for(int j=L.length;j>=i;j--)
        L.data[j]=L.data[j-1];
    L.data[i-1]=e;
    L.length++;
    return true;
}
void printlist(SqList L)
{
    for(int i=0;i<L.length;i++)
        printf("%3d",L.data[i]);
    cout<<endl;
}
bool ListDelete(SqList &L,int i,T &e)
{
    if(i<1 || i>L.length)
        return false;
    e=L.data[i-1];
    for(int j=i;j<L.length;j++)
        L.data[j-1]=L.data[j];
    L.length--;
    return true;
}
int main()
{
    SqList L;
    L.length=3;
    L.data[0]=1;
    L.data[1]=2;
    L.data[2]=3;
    T e,del;
    int i;
    cin>>e;
    if (ListInsert(L,2,e))
    {
        printlist(L);
    }
    cin>>i;
    if (ListDelete(L,i,del))
    {
        printlist(L);
    }else cout<<"false";
}