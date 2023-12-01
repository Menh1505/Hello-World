#include <iostream>

using namespace std;

struct node // khai báo nút
{
    int data;
    node *pNext;
};

struct linkList // khai báo danh sách
{
    node *pHead;
    node *pTail;
};

void Init(linkList &l) // khởi tạo danh sách
{
    l.pHead = NULL;
    l.pTail = NULL;
}

void getNode(node *p, int n) // đưa dữ liệu vào nút
{
    p->data = n;
    p->pNext = NULL;
}

void addHead(linkList &l, node *p) // Thêm nút vào đầu ds
{
    if (l.pHead == NULL)
    {
        l.pHead->pNext = p;
        l.pHead = p;
    }
    else
    {
        p = l.pHead->pNext;
        l.pHead->pNext = p;
        l.pHead = p;
    }
}

void addTail(linkList &l, node *p) // Thêm nút vào cuối ds
{
    if (l.pHead == NULL)
    {
        l.pHead = l.pTail = p;
    }
    else
    {
        l.pTail->pNext = p;
        l.pTail = p;
    }
}

void inputLinkedList(linkList &l) // Nhập danh sách
{
    cout << "\nEnter the number of linkedList: ";

    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        cout << "Enter element " << i << " : ";
        int a;
        cin >> a;

        node *p = new node;
        getNode(p, a);
        addTail(l, p);
    }
}

void outputLinkedlist(linkList l)
{
    cout << "\n---Output linked list---\n";
    for (node *p = l.pHead; p != NULL; p = p->pNext)
    {
        cout << p->data << endl;
    }
}

void freeList(linkList &l)
{
    node *p;
    while (l.pHead != NULL)
    {
        p = l.pHead;
        l.pHead = l.pHead->pNext;
        delete p;
    }
}
int main()
{
    linkList l;
    Init(l);
    inputLinkedList(l);
    outputLinkedlist(l);
    freeList(l);
    return 0;
}