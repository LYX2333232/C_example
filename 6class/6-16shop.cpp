#include <iostream>
using namespace std;
//�������Ƚ��ȳ��ķ�ʽ����
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
    static int total() //��̬��Ա���������ػ���������
    {
        return total_weight;
    }
    goods *next;

private:
    int weight;
    static int total_weight; //��̬���ݳ�Ա����¼����������
};
int goods::total_weight = 0;
void in(goods *&f, goods *&r, int w) //��������ӱ�β������
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
void sale(goods *&f, goods *&r) //�۳�����ӱ�ͷɾ�����
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
        switch (choice) //����ѡ��
        {
        case 1: //���룬����һ�����
        {
            cout << "Input weight:"; //����һ����������
            cin >> w;
            in(front, rear, w); //�ӱ�β������
            break;
        }
        case 2: //���룬�۳�һ�����
        {
            sale(front, rear); //�ӱ�ͷɾ�����
            break;
        }
        case 0: //���룬����
            break;
        }
        cout << "Now total weight is:" << goods::total() << endl;
    } while (choice);
}