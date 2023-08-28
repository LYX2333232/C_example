#include <iostream>
#include <list>
#include <ctime>
using namespace std;
void create(list<int> &order, int len) //建立有序链表
{
    int k, i;
    for (i = 0; i < len; i++)
    {
        k = rand() % 100;   //生成随机数
        order.push_back(k); //插入链表
    }
    order.sort(); //排序
}
void out(list<int> &l) //输出链表
{
    list<int>::iterator p; //建立list容器的迭代
    p = l.begin();
    while (p != l.end())
    {
        cout << *p << " ";
        p++;
    }
    cout << endl;
}
void merge(list<int> &l1, list<int> l2) //合并链表
{
    l1.merge(l2); //把有序链表l2合并到l1中，并保持l1有序
}
int main()
{
    list<int> l1, l2;
    srand(int(time(0)));
    create(l1, 10);
    cout << "list l1 :\n";
    out(l1);
    create(l2, 5);
    cout << "list l2 :\n";
    out(l2);
    merge(l1, l2);
    cout << "list l1 :\n";
    out(l1);
}