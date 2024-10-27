#include <iostream>
using namespace std;
typedef int ElemType;

typedef struct LNode
{
    ElemType data;
    struct LNode *next;
} LNode, *LinkList;

void end_insert(LinkList &L)
{
    L = (LinkList)malloc(sizeof(LNode));
    L->next = NULL;
    ElemType e;
    cin >> e;
    LNode *s, *r = L;
    while (e != 9999)
    {   
        s = (LinkList)malloc(sizeof(LNode));
        s->data = e;
        s->next = NULL;
        r->next = s;
        r = s;
        cin >> e;
    }
}

void PrintList(LinkList L)
{
    L = L->next;

    while (L != NULL)
    {
        printf("%3d", L->data); // 打印当前结点数据
        L = L->next; // 指向下一个结点
    }

    printf("\n");
}

LinkList search(LinkList L, int k)
{
    int i = 1;
    LinkList p = L->next, s;
    while (p != NULL && i < k)
    {
        p = p->next;
        i++;
    }
    return p;
}

bool delete_link(LinkList &L, int k)
{
    LinkList p = search(L, k - 1);
    if (p == NULL)
    {
        return false;
    }
    else
    {
        LinkList q = p->next;
        if (q == NULL)
        {
            return false;
        }
        
        p->next = q->next;
        free(q);
        return true;
    }
}

int main()
{
    LinkList L,P,Q;
    end_insert(L);
    P=search(L, 1);
    cout<<P->next->data<<endl;
    Q=(LinkList)malloc(sizeof(LNode));
    Q->data=99;
    Q->next=P->next;
    P->next=Q;
    PrintList(L);
    delete_link(L, 4);
    PrintList(L);
}