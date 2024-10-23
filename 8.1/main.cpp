#include<iostream>
#include<string>
using namespace std;
struct student
{
    int id;
    string name;
    char sex;
};
int main()
{
    struct student s;
    cin>>s.id>>s.name>>s.sex;
    cout<<s.id<<" "<<s.name<<" "<<s.sex<<endl;
    return 0;
}