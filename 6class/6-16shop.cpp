#include <iostream>
using namespace std;
//货物以先进先出的方式管理
class goods
{
public:
    goods(int w)
    {
        weight = w;
        total_weight += w;
    }
    ~goods()
    {
        total_weight -= weight;
    }
    static int total() //静态成员函数，返回货物总重量
    {
        return total_weight;
    }
    goods *next;

private:
    int weight;
    static int total_weight; //静态数据成员，记录货物总重量
};
int goods::total_weight = 0;
void in(goods *&f, goods *&r, int w) //购进货物，从表尾插入结点
{
    goods *p = new goods(w);
    p->next = NULL;
    if (f == NULL)
        f = r = p;
    else
    {
        r->next = p;
        r = r->next;
    }
}
void sale(goods *&f, goods *&r) //售出货物，从表头删除结点
{
    if (f == NULL)
    {
        cout << "No any goods!\n";
        return;
    }
    goods *q = f;
    f = f->next;
    delete q;
    q = NULL;
    cout << "sold.\n";
}
int main()
{
    goods *front = NULL, *rear = NULL;
    int w, choice;
    do
    {
        cout << "Please choice:\n";
        cout << "Key in 1 is purchase,\nKey in 2 is sale,\nKey in 0 is over.\n";
        cin >> choice;
        switch (choice) //操作选择
        {
        case 1: //输入，购进一箱货物
        {
            cout << "Input weight:"; //输入一箱货物的质量
            cin >> w;
            in(front, rear, w); //从表尾插入结点
            break;
        }
        case 2: //输入，售出一箱货物
        {
            sale(front, rear); //从表头删除结点
            break;
        }
        case 0: //输入，结束
            break;
        }
        cout << "Now total weight is:" << goods::total() << endl;
    } while (choice);
}