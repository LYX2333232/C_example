#include <iostream>
using namespace std;
void swap(int *, int *);
int main()
{
    int a = 3, b = 8;
    cout << "before swapping��\n";
    cout << "a=" << a << ",b=" << b << endl;
    swap(&a, &b); //ʵ�������ͱ����ĵ�ַ
    cout << "after swapping��\n";
    cout << "a=" << a << ",b=" << b << endl;
}
void swap(int *x, int *y) //�β�������ָ��
{
    int temp = *x;
    *x = *y;
    *y = temp;
}