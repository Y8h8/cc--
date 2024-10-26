#include<iostream>
using namespace std;
static int a=10;
typedef int ElementType;
typedef struct ListNode
{
    ElementType data;
    struct ListNode *next;
}LNode,*Listnode;
void head_insert(Listnode &L)
{   
    L=(Listnode)malloc(sizeof(LNode));
    L->next=NULL;
    ElementType e;
    cin>>e;
    LNode *p;
    while (e!=9999)
    {
    p=(Listnode)malloc(sizeof(LNode));
    p->data=e;
    p->next=L->next;
    L->next=p;
    cin>>e;
    }
    
}
void end_insert(Listnode &L)
{
    L=(Listnode)malloc(sizeof(LNode));
    L->next=NULL;
    ElementType e;
    cin>>e;
    LNode *s,*r=L;
    while (e!=9999)
    {   
        s=(Listnode)malloc(sizeof(LNode));
        s->data=e;
        s->next=NULL;
        r->next=s;
        r=s;
        cin>>e;
    }
}
void PrintList(Listnode L)

{
    L=L->next;

    while(L!=NULL)

    {

        printf("%d",L->data);//打印当前结点数据

        L=L->next;//指向下一个结点

        if(L!=NULL)

        {

            printf(" ");

        }

    }

    printf("\n");

}


int main()
{
    Listnode L;
    head_insert(L);
    PrintList(L);
    end_insert(L);
    PrintList(L);
    return 0;
}
