#include <iostream>
using namespace std;
typedef int ElemType;
const static int maxsize=100;
typedef struct LNode
{
    ElemType data[maxsize];
    int top;
} LNode;

typedef struct Link
{
    ElemType data[5];
    int front, rear;
} Link;

void initQueue(Link &L)
{
    L.front = L.rear = 0;
}

bool isEmpty(Link L)
{
    return L.front == L.rear;
}

bool isFull(Link L)
{
    return L.front == (L.rear + 1) % 5;
}

bool enQueue(Link &L, ElemType x)
{
    if (isFull(L))
    {
        return false;
    }
    L.data[L.rear] = x;
    L.rear = (L.rear + 1) % 5;
    return true;
}

bool deQueue(Link &L, ElemType &x)
{
    if (isEmpty(L))
    {
        return false;
    }
    x = L.data[L.front];
    L.front = (L.front + 1) % 5;
    return true;
}


/**
 * 初始化一个栈
 * @param L 指向栈的指针
 */
void init(LNode &L)
{
    // 将栈顶指针初始化为-1，表示栈为空
    L.top = -1;
}

/**
 * 判断栈是否为空
 * @param L 指向栈的指针
 * @return 如果栈为空，返回true；否则返回false
 */
bool isEmpty(LNode L)
{
    // 如果栈顶指针为-1，表示栈为空
    return L.top == -1;
}

/**
 * 判断栈是否已满
 * @param L 指向栈的指针
 * @return 如果栈已满，返回true；否则返回false
 */
bool isFull(LNode L)
{
    // 如果栈顶指针等于数组长度减1，表示栈已满
    return L.top == maxsize - 1;
}

/**
 * 入栈操作
 * @param L 指向栈的指针
 * @param x 要入栈的元素
 * @return 如果入栈成功，返回true；否则返回false
 */
bool push(LNode &L, ElemType x)
{
    // 如果栈已满，无法入栈
    if (isFull(L))
    {
        return false;
    }

    // 将元素x入栈，并将栈顶指针加1
    L.data[++L.top] = x;
    return true;
}

/**
 * 出栈操作
 * @param L 指向栈的指针
 * @param x 用于存储出栈元素的变量
 * @return 如果出栈成功，返回true；否则返回false
 */
bool pop(LNode &L, ElemType &x)
{
    // 如果栈为空，无法出栈
    if (isEmpty(L))
    {
        return false;
    }

    // 将栈顶元素出栈，并将栈顶指针减1
    x = L.data[L.top--];
    return true;
}


int main()
{
    LNode L;
    init(L);
    ElemType x, y, z;

    cin >> x >> y >> z;
    
    isFull(L);
    push(L, x);
    push(L, y);
    push(L, z);
    while ( !isEmpty(L))
    {
        pop(L,x);
        cout <<" "<< x << " ";
    }
    
    cout << endl;

    Link L1;
    initQueue(L1);
    while (isFull(L1))
    {
        cin >> x;
        enQueue(L1, x);
    }
    while ( !isEmpty(L1))
    {
        deQueue(L1,x);
        cout <<" "<< x << " ";
    }
    

    return 0;
}

